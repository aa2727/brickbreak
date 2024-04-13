#include "model/Game.h"


// Constructor definitions
Game::Game()
{
    init();
}

// Destructor definition
Game::~Game()
{
    // nothing to do
}

// method definitions

void Game::init()
{
    // set moving speed
    this->moving_speed = 1;
    // create balls
    std::vector<Ball> balls = {Ball(1, 1)};
    this->balls_in_game = balls;

    // create walls
    //TODO

}

void Game::update()
{
    // move balls
    move_balls(this->balls_in_game);
}

void Game::move_balls(std::vector<Ball> &balls)
{
    for (auto &b : balls)
    {
        move_ball(b);
    }
}

void Game::move_ball(Ball &b)
{
    b.move(); // 
}
