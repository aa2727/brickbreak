#include "view/GameScreen.h"
#include "view/itemView/BallView.h"

GameScreen::GameScreen() : plat(nullptr),
                           balls(nullptr)
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
    this->plat = std::make_shared<Platform>(2.0,0.0,PLATFORM_POS_X,PLATFORM_POS_Y,1);
    this->balls = std::make_unique<std::vector<std::unique_ptr<Ball>>>();
    this->balls->push_back(std::make_unique<Ball>(31.0, 31.0,5.0,1.0));
    this->balls->push_back(std::make_unique<Ball>(31.0, 31.0,1.0,1.0));
    
    
}

void GameScreen::handleEvent(const SDL_Event &e)
{
    if (e.type == SDL_KEYDOWN)
    {
        switch (e.key.keysym.sym)
        {
        case SDLK_q:
        case SDLK_LEFT:
            plat->movement(LEFT);
            break;

        case SDLK_d:
        case SDLK_RIGHT:
            plat->movement(RIGHT);
            break;
            // Add cases for other keys if needed
        }
    }
}

void GameScreen::render()
{
    SDL_SetRenderDrawColor(this->renderer.get(), 133, 133, 133, 255);
    SDL_RenderClear(this->renderer.get());
    this->drawPlatform();
    this->drawBalls();
    SDL_RenderPresent(this->renderer.get());
}

void GameScreen::drawPlatform()
{
    // cast float to int
    SDL_Rect rect = {static_cast<int>(plat.get()->get_position().at(0)), static_cast<int>(plat.get()->get_position().at(1)),200 *plat.get()->get_size() , 40};
    SDL_SetRenderDrawColor(this->renderer.get(), 255, 255, 0, 255);
    SDL_RenderFillRect(this->renderer.get(), &rect);
}

void GameScreen::drawBalls()
{
    // use iterator to draw all balls
    for (auto it = balls->begin(); it != balls->end(); ++it)
    {
        SDL_SetRenderDrawColor(this->renderer.get(), 255, 0, 0, 255);
        drawBall(this->renderer,it->get()->get_position().at(0), it->get()->get_position().at(1));
    }
}

void GameScreen::update()
{
    for (auto it = balls->begin(); it != balls->end(); ++it)
    {
        it->get()->move(0.10);
    }
}