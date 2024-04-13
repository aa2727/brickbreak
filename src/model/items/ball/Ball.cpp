#include "model/items/ball/Ball.h"

Ball::Ball() {}

Ball::Ball(std::array<float, 2> direc)
{
    direction = direc;
}

Ball::Ball(float dir_x, float dir_y)
{
    direction = {dir_x, dir_y};
}

Ball::Ball(const Ball &other)
{
    direction = other.direction;
}

Ball::~Ball() {}

std::array<float, 2> Ball::get_direction()
{
    return direction;
}

void Ball::set_direction(std::array<float, 2> new_pos)
{
    direction = new_pos;
}

void Ball::move(float speed)
{
    set_position(get_position() + get_direction() * speed);
}

void Ball::tick_time() {}