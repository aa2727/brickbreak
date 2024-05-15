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

/**
 * @brief Class for the game 
 * This class is the main class of the game
 * Handle the game logic generally
 * 
 */
class Game
{
public:
    Game();
    Game(const int width, const int height);
    ~Game();
    void init();
    void update();

    /**
     * @brief Check if the game is over (balls are out or all the bricks are destroyed)
     * 
     * @return true if the game is over
     * @return false if the game is not over
     */
    bool is_end();

    /**
     * @brief Check if the balls are out of the game (under the platform)
     * 
     * @return true if the balls are out
     * @return false if the balls are not out
     */
    bool balls_are_out();

    /**
     * @brief Handle the collision between the balls and the walls, the platform and the bricks
     * 
     */
    void handle_collision();

    Platform &get_platform() { return *plat; }
    Grid &get_grid() { return *grid; }
    std::vector<std::unique_ptr<Wall>> &get_walls() { return walls; }
    std::vector<std::unique_ptr<Ball>> &get_balls() { return balls; }

private:
    int max_width; // Width of the game
    int max_height; // Height of the game
    std::shared_ptr<Platform> plat; // The platform
    std::unique_ptr<Grid> grid; // The grid of bricks
    std::vector<std::unique_ptr<Wall>> walls; // The three walls
    std::vector<std::unique_ptr<Ball>> balls; // The balls
    std::vector<std::unique_ptr<Transformer>> transformers; // The bonus/malus
};



#endif // GAME_H
