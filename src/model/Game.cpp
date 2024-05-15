#include "model/Game.h"

// Constructors
Game::Game()
{
    Game(640, 480);
}

Game::Game(const int width, const int height) : walls(), 
                                                balls(),
                                                plat(nullptr)

{
    this->max_width = width;
    this->max_height = height;
}

// Destructor

Game::~Game()
{
}

// Methods

void Game::init()
{
    this->plat = std::make_shared<Platform>(PLATFORM_POS_X, PLATFORM_POS_Y,200,20);
    this->grid = std::make_unique<Grid>(0, 0, this->max_width, this->max_height / 4, 6, 6);
    this->walls.push_back(std::make_unique<Wall>(0, 0, this->max_width, 10));
    this->walls.push_back(std::make_unique<Wall>(0, 0, 10, this->max_height));
    this->walls.push_back(std::make_unique<Wall>(this->max_width - 10, 0, 10, this->max_height));
    this->balls.push_back(std::make_unique<Ball>(255., 400., 1, -1.5, 10));

}

void Game::update()
{
    this->plat->movement(this->max_width);
    for (auto it = this->balls.begin(); it != this->balls.end(); ++it)
    
    {
        (*it)->move(BALL_SPEED);
    }
    this->handle_collision();
}

bool Game::is_end()
{
    return this->balls_are_out() || this->grid->is_empty();
}

bool Game::balls_are_out()
{
    for (auto &ball : this->balls)
    {
        if (ball->get_position().at(1) < this->max_height)
        {
            return false;
        }
    }
    return true;
}

void Game::handle_collision()
{
    for(auto it = this->balls.begin(); it != this->balls.end(); ++it)
    {
        (*it)->resolve_collision(*this->plat);
        (*it)->resolve_collision(*this->grid);
        for(auto it2 = this->walls.begin(); it2 != this->walls.end(); ++it2)
        {
           (*it)->resolve_collision(**it2);
        }

    }
}