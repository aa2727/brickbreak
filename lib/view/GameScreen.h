#ifndef GAME_SCREEN_H
#define GAME_SCREEN_H

#include "view/Screen.h"
#include "model/items/platform/Platform.h"
#include "model/items/ball/Ball.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <memory>
#include <array>
#include <vector>
#include <string>
#include <iostream>

#define LEFT -1
#define RIGHT 1

#define PLATFORM_POS_X 255.0
#define PLATFORM_POS_Y 480.0

class GameScreen : public Screen
{
public:
    GameScreen();
    ~GameScreen();
    void init() override;
    void handleEvent(const SDL_Event &e) override;
    void render() override;
    void update() override;

    void drawPlatform();
    void drawBalls();

private:
    std::shared_ptr<Platform> plat;
    std::vector<std::unique_ptr<Ball>> balls;
};

#endif // GAME_SCREEN_H