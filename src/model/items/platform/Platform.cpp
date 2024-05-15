#include "model/items/platform/Platform.h"
#include <algorithm>
#include <cmath>
#include "model/items/ball/Ball.h"

Platform::Platform() {}

Platform::Platform(float width, float height)
{
    this->direction = {0., 0.};
    this->width = width;
    this->height = height;
}

Platform::Platform(const Platform &other)
{
    this->direction = other.direction;
    this->width = other.width;
    this->height = other.height;
}

Platform::Platform(std::array<float, 2> position, float width, float height) : Solid(position)
{
    this->direction = {0., 0.};
    this->width = width;
    this->height = height;
}

Platform::Platform(float pos_x, float pos_y, float width, float height): Solid(pos_x, pos_y, width, height)
{
    this->direction = {0., 0.};
}

Platform::~Platform() {}

std::array<float, 2> Platform::get_direction()
{
    return this->direction;
}

void Platform::set_direction(std::array<float, 2> new_dir)
{
    this->direction = new_dir;
}

int Platform::get_speed()
{
    return this->speed;
}

void Platform::set_speed(int new_speed)
{
    this->speed = new_speed;
}

void Platform::movement()
{
    this->position.at(0) += this->direction.at(0);
}

bool Platform::collided_by(Solid &ball)
{
    //std::cout << "Platform collided by ball" << std::endl;
    // cast the ball
    Ball &ball2 = dynamic_cast<Ball &>(ball);
    float ball_x = ball.get_position().at(0);
    float ball_y = ball.get_position().at(1);

    float top, left, bottom, right;
    top = this->get_position().at(1);
    bottom = this->get_position().at(1) + this->get_height();
    left = this->get_position().at(0);
    right = this->get_position().at(0) + this->get_width();

    float closest_x, closest_y;
    closest_x = std::clamp(ball_x, left, right);
    closest_y = std::clamp(ball_y, top, bottom);

    auto square = [](auto x)
    { return x * x; };

    if (std::sqrt(square(closest_x - ball_x) + square(closest_y - ball_y)) <= ball2.get_radius())
        return true;
    return false;
}