#include "view/MainWindow.h"
#include "view/HomeScreen.h"
#include "view/GameScreen.h"

MainWindow::MainWindow() : running(false),
                           has_to_change(false),
                           screen(nullptr),
                           next_screen(nullptr)

{
    this->init();
}

MainWindow::~MainWindow()
{
    // nothing to do
}

void MainWindow::init()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cerr << "Echec de l'initialisation de la SDL " << SDL_GetError() << std::endl;
        exit(1);
    }
    this->window = std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>(SDL_CreateWindow("BrickxBreakx", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 700, 900, SDL_WINDOW_SHOWN), SDL_DestroyWindow);
    if (this->window)
    {
        std::cout << "Window created" << std::endl;
    }
    this->setScreen();
    running = true;
}

void MainWindow::handleEvent(const SDL_Event &e)
{
    if (e.type == SDL_QUIT)
    {
        this->running = false;
    }
    else
    {
        this->screen->handleEvent(e);
    }
}

void MainWindow::render()
{
    this->screen->render();
}

void MainWindow::update()
{
    this->screen->update();
}

void MainWindow::run()
{
    while (this->running)
    {
        if (this->has_to_change)
        {

            this->screen->destroyRenderer();
            this->screen.release();
            this->screen = std::move(this->next_screen);
            this->setScreen(std::move(this->screen));
            this->has_to_change = false;
        }
        SDL_Event e;
        while (SDL_PollEvent(&e))
        {
            this->handleEvent(e);
        }
        this->update();
        this->render();
    }
}

void MainWindow::setScreen(std::unique_ptr<Screen> screen)
{
    this->screen = std::move(screen);
    this->screen->setWindow(this->window);
    this->screen->setParent(std::shared_ptr<Window>(this));
    this->screen->init();
}

void MainWindow::setScreen()
{
    this->screen = std::make_unique<HomeScreen>();
    this->setScreen(std::move(this->screen));
}

void MainWindow::changeTo(std::unique_ptr<Window> window)
{
    if (window == nullptr)
    {
        this->running = false;
    }
    this->next_screen = std::move(std::unique_ptr<Screen>(dynamic_cast<Screen *>(window.release())));
    this->has_to_change = true;
}
