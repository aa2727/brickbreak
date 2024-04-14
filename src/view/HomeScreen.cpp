#include "view/HomeScreen.h"

HomeScreen::HomeScreen() : running(true),
                         window(nullptr, SDL_DestroyWindow),
                         renderer(nullptr, SDL_DestroyRenderer), 
                         background(nullptr, SDL_DestroyTexture), 
                         title(nullptr, SDL_DestroyTexture), 
                         playButton(nullptr, SDL_DestroyTexture), 
                         quitButton(nullptr, SDL_DestroyTexture)
{
    this->init();
}

HomeScreen::~HomeScreen()
{
    // nothing to do
}

void HomeScreen::init()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cerr << "Echec de l'initialisation de la SDL " << SDL_GetError() << std::endl;
        exit(1);
    }
    this->window = std::unique_ptr<SDL_Window,decltype(&SDL_DestroyWindow)>(SDL_CreateWindow("Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 700, 900, SDL_WINDOW_SHOWN), SDL_DestroyWindow);
    if(this->window)
    {
        std::cout << "Window created" << std::endl;
    }
    this->renderer = std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)>(SDL_CreateRenderer(this->window.get(), -1, 0), SDL_DestroyRenderer);
    SDL_SetRenderDrawColor(this->renderer.get(), 255, 255, 0, 255);
    //this->title = std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)>(IMG_LoadTexture(this->renderer.get(), "../res/title.png"), SDL_DestroyTexture);
}

void HomeScreen::handleEvent(const SDL_Event &e)
{
    if (e.type == SDL_QUIT)
    {
        this->running = false;
    }
}

void HomeScreen::render()
{
    SDL_RenderClear(this->renderer.get());
    SDL_RenderPresent(this->renderer.get());
}

void HomeScreen::update()
{
    // nothing to do
}

void HomeScreen::run()
{
    while (this->running)
    {
        SDL_Event e;
        while (SDL_PollEvent(&e))
        {
            this->handleEvent(e);
        }
        this->update();
        this->render();
    }
}