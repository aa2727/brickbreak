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
    std::cout << "GameScreen init" << std::endl;
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
}

void GameScreen::update()
{
    // nothing to do
}