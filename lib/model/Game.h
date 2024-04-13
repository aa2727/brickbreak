#ifndef GAME_H
#define GAME_H

#include <vector>
#include "model/items/Ball.h"
#include "model/items/Solid.h"
#include "model/Score.h"

class Game
{
public:
    Game();
    Game(int width, int height);
    Game(const std::vector<std::vector<int>> &map);
    Game(const Game &g); // copy constructor
    ~Game();

private:
    std::vector<Ball> balls_in_game;
    std::vector<Solid> solids_in_game;
    Score score;
    void init();
    void update();
    void move_balls(std::vector<Ball> &balls);
    void move_ball(Ball &b);
    Solid get_collided_solid(const Ball &b);
};

#endif