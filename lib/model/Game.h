#ifndef GAME_H
#define GAME_H

#include "model/items/platform/Platform.h"
#include "model/items/ball/Ball.h"
#include "model/items/wall/Wall.h"
#include "model/items/grid/Grid.h"

#define PLATFORM_POS_X 255.0
#define PLATFORM_POS_Y 480.0
#define BALL_SPEED 1.

class Game
{
public:
    Game();
    Game(const int width, const int height);
    ~Game();
    void init();
    void update();
    bool is_end();

    bool balls_are_out();
    void handle_collision();

private:
    int max_width;
    int max_height;
    std::shared_ptr<Platform> plat;
    std::unique_ptr<Grid> grid;
    std::vector<std::unique_ptr<Wall>> walls;
    std::vector<std::unique_ptr<Ball>> balls;
};



#endif // GAME_H
