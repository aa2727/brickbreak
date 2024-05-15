#ifndef GAME_SCREEN_H
#define GAME_SCREEN_H

#include "view/Screen.h"
#include "model/items/platform/Platform.h"
#include "model/items/ball/Ball.h"
#include "model/items/brick/Brick.h"
#include "model/items/grid/Grid.h"
#include "model/items/wall/Wall.h"
#include "model/items/Solid.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <memory>
#include <array>
#include <vector>
#include <string>
#include <iostream>

#define PLATFORM_POS_X 255.0
#define PLATFORM_POS_Y 480.0

#define WINDOW_WIDTH 700
#define WINDOW_HEIGHT 900

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
    void drawBricks();
    void drawScreenGrid();
    void drawWalls();

private:
    std::shared_ptr<Platform> plat;
    std::unique_ptr<Grid> grid;
    std::vector<std::unique_ptr<Wall>> walls;
    std::vector<std::unique_ptr<Ball>> balls;
    std::vector<std::unique_ptr<Brick>> bricks;
};

#endif // GAME_SCREEN_H