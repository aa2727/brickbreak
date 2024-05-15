#include "model/items/wall/Wall.h"
#include "model/items/ball/Ball.h"
#include <algorithm>
#include <cmath>


Wall::Wall() : Solid()
{
}

Wall::Wall(const float pos_x, const float pos_y) : Solid(pos_x, pos_y)
{
}

Wall::Wall(const float pos_x, const float pos_y, const float width, const float height) : Solid(pos_x, pos_y, width, height)
{
}

// Destructor
Wall::~Wall()
{
    std::cout << "Wall destroyed" << std::endl;
}

bool Wall::collided_by(Solid &ball)
{
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