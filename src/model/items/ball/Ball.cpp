#include "model/items/ball/Ball.h"

Ball::Ball() {}

Ball::Ball(std::array<int, 2> direc)
{
    direction = direc;
}

Ball::Ball(int dir_x, int dir_y)
{
    direction = {dir_x, dir_y};
}

Ball::Ball(const Ball &other)
{
    direction = other.direction;
}

Ball::~Ball() {}

std::array<int, 2> Ball::get_direction()
{
    return direction;
}

void Ball::set_direction(std::array<int, 2> new_pos)
{
    direction = new_pos;
}

void Ball::move() {}

void Ball::tick_time() {}