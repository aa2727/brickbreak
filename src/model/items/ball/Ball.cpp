#include "model/items/ball/Ball.h"

Ball::Ball() {}

Ball::Ball(std::array<float, 2> direction)
{
    this->direction = direction;
}

Ball::Ball(float dir_x, float dir_y)
{
    this->direction = {dir_x, dir_y};
}

Ball::Ball(float pos_x, float pos_y, float dir_x, float dir_y)
{
    this->direction = {dir_x, dir_y};
    this->set_position({pos_x, pos_y});
}

Ball::Ball(const Ball &other)
{
    this->direction = other.direction;
}

Ball::~Ball() 
{
    std::cout << "Ball destroyed" << "position: " << get_position()[0] << ", " << get_position()[1] << std::endl;
}

std::array<float, 2> Ball::get_direction()
{
    return this->direction;
}

void Ball::set_direction(std::array<float, 2> new_pos)
{
    this->direction = new_pos;
}

void Ball::move(float speed)
{
    std::array<float, 2> new_pos;
    for (int i = 0; i < new_pos.size(); i++)
        new_pos[i] = get_position()[i] + speed * get_direction()[i];
    set_position(new_pos);
}

void Ball::tick_time() {}