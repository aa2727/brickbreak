#include "view/GameScreen.h"

GameScreen::GameScreen() : plat(nullptr)
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
    this->plat = std::make_shared<Platform>();
    // nothing to do
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
    SDL_RenderClear(this->renderer.get());
    SDL_SetRenderDrawColor(this->renderer.get(), 255, 255, 0, 255);
    SDL_RenderPresent(this->renderer.get());
}

void GameScreen::update()
{
    // nothing to do
}