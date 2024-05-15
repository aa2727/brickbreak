#include "view/GameScreen.h"
#include "view/itemView/BallView.h"
#include "view/itemView/GridView.h"
//#include "view/itemView/PlatformView.h"
#include "view/itemView/WallView.h"

GameScreen::GameScreen() : plat(nullptr),
                           grid(nullptr),
                           balls(),
                           walls(),
                           bricks()
{
    // nothing to do
}

GameScreen::~GameScreen()
{
    // nothing to do
}

void GameScreen::init()
{
    this->renderer = std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)>(SDL_CreateRenderer(this->window.get(), -1, 0), SDL_DestroyRenderer);
    if (this->renderer == nullptr)
    {
        std::cerr << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        exit(1);
    }

    // A supprimer apres creation  de la classe game model
    this->plat = std::make_shared<Platform>(PLATFORM_POS_X, PLATFORM_POS_Y, 200, 20);
    this->grid = std::make_unique<Grid>(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT/4,6,6);
    this->walls.push_back(std::make_unique<Wall>(0, 0, WINDOW_WIDTH, 10));
    this->walls.push_back(std::make_unique<Wall>(0, 0, 10, WINDOW_HEIGHT));
    this->walls.push_back(std::make_unique<Wall>(WINDOW_WIDTH - 10, 0, 10, WINDOW_HEIGHT));
    this->balls.push_back(std::make_unique<Ball>(255., 400., 1, -1.5, 10));
}

void GameScreen::handleEvent(const SDL_Event &e)
{
    if (e.type == SDL_KEYDOWN)
    {
        auto [p_x, p_y] = plat->get_position();
        switch (e.key.keysym.sym)
        {
        case SDLK_LEFT:
            plat->set_direction({-(float)(plat->get_speed()), 0});
            break;

        case SDLK_RIGHT:
            plat->set_direction({(float)(plat->get_speed()), 0});
            break;
        }
    }
    else if (e.type == SDL_KEYUP)
    {
        plat->set_direction({0, 0});
    }

    if (e.type == SDL_MOUSEMOTION)
    {
        int mouse_x, mouse_y;
        Uint32 mouseState = SDL_GetMouseState(&mouse_x, &mouse_y);

        auto [p_x, p_y] = plat->get_position();
        plat->set_position({(float)(mouse_x - plat->get_width() / 2), p_y});
    }
}

void GameScreen::render()
{
    SDL_SetRenderDrawColor(this->renderer.get(), 133, 133, 133, 255);
    SDL_RenderClear(this->renderer.get());
    this->drawWalls();
    this->drawScreenGrid();
    this->drawPlatform();
    this->drawBalls();
    SDL_RenderPresent(this->renderer.get());
}

void GameScreen::drawPlatform()
{
    auto [plat_x, plat_y] = plat->get_position();
    // cast float to int
    SDL_Rect rect = {static_cast<int>(plat_x), static_cast<int>(plat_y), static_cast<int>(plat->get_width()), static_cast<int>(plat->get_height())};
    SDL_SetRenderDrawColor(this->renderer.get(), 255, 255, 0, 255);
    SDL_RenderFillRect(this->renderer.get(), &rect);
}

void GameScreen::drawBalls()
{
    // use iterator to draw all balls
    for (auto it = balls.begin(); it != balls.end(); ++it)
    {
        SDL_SetRenderDrawColor(this->renderer.get(), 255, 0, 0, 255);
        auto [x, y] = (*it)->get_position();
        drawBall(this->renderer, x, y, (int)((*it)->get_radius()));
    }
}

void GameScreen::drawBricks()
{
    for (auto it = bricks.begin(); it != bricks.end(); ++it)
    {
        auto [x, y] = (*it)->get_position();
        SDL_Rect rect = {static_cast<int>(x), static_cast<int>(y), (int)(*it)->get_width(), (int)(*it)->get_height()};
        SDL_SetRenderDrawColor(this->renderer.get(), 0, 255, 0, 255);
        SDL_RenderFillRect(this->renderer.get(), &rect);
    }
}

void GameScreen::drawScreenGrid()
{
    drawGrid(this->renderer,WINDOW_WIDTH,WINDOW_HEIGHT/4,*grid);
}

void GameScreen::drawWalls()
{
    for (auto it = walls.begin(); it != walls.end(); ++it)
    {
        drawWall(this->renderer, **it);
    }
}

void GameScreen::update()
{
    plat->movement();

    for (auto it = balls.begin(); it != balls.end(); ++it)
    {
        (*it)->move(0.01);
        (*it)->resolve_collision(*plat);
        (*it)->resolve_collision(*grid);
        for (auto it2 = walls.begin(); it2 != walls.end(); ++it2)
        {
            (*it)->resolve_collision(**it2);
        }
    }
}