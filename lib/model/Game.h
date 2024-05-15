#ifndef GAME_H
#define GAME_H

#include "model/items/platform/Platform.h"
#include "model/items/ball/Ball.h"
#include "model/items/wall/Wall.h"
#include "model/items/grid/Grid.h"
#include "model/bonus/Transformer.h"

#define PLATFORM_POS_X 255.0
#define PLATFORM_POS_Y 480.0
#define BALL_SPEED 0.1

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

    Platform &get_platform() { return *plat; }
    Grid &get_grid() { return *grid; }
    std::vector<std::unique_ptr<Wall>> &get_walls() { return walls; }
    std::vector<std::unique_ptr<Ball>> &get_balls() { return balls; }
    std::vector<std::unique_ptr<Transformer>> &get_transformers() { return transformers; }

private:
    int max_width;
    int max_height;
    std::shared_ptr<Platform> plat;
    std::unique_ptr<Grid> grid;
    std::vector<std::unique_ptr<Wall>> walls;
    std::vector<std::unique_ptr<Ball>> balls;
    std::vector<std::unique_ptr<Transformer>> transformers;

};



#endif // GAME_H
