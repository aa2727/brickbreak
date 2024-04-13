#ifndef GAME_H
#define GAME_H

#include <vector>
#include "model/items/ball/Ball.h"
#include "model/items/Solid.h"
#include "model/Score.h"

class Game
{
public:
    Game();
    ~Game();

private:
    std::vector<Ball> balls_in_game;
    std::vector<Solid> solids_in_game;
    int moving_speed;
    Score score;
    void init();
    void update();
    void move_balls(std::vector<Ball> &balls);
    void move_ball(Ball &b);
    Solid get_collided_solid(const Ball &b);
};

#endif