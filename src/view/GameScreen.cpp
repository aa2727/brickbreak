#include "view/GameScreen.h"

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
    this->plat = std::make_shared<Platform>(2.0,0.0,PLATFORM_POS_X,PLATFORM_POS_Y,1);
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
    SDL_RenderPresent(this->renderer.get());
}

void GameScreen::drawPlatform()
{
    
    SDL_Rect rect = {plat.get()->get_position().at(0), plat.get()->get_position().at(1),200 *plat.get()->get_size() , 40};
    SDL_SetRenderDrawColor(this->renderer.get(), 255, 255, 0, 255);
    SDL_RenderFillRect(this->renderer.get(), &rect);
}

void GameScreen::update()
{
    // nothing to do
}