#ifndef GAME_SCREEN_H
#define GAME_SCREEN_H

#include "view/Screen.h"
#include "model/items/platform/Platform.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <memory>
#include <array>
#include <string>
#include <iostream>

#define LEFT -1
#define RIGHT 1

class GameScreen : public Screen
{
public:
    GameScreen();
    ~GameScreen();
    void init() override;
    void handleEvent(const SDL_Event &e) override;
    void render() override;
    void update() override;

private:
    std::shared_ptr<Platform> plat;
};

#endif // GAME_SCREEN_H