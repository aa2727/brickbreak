#include "model/items/ball/Ball.h"
#include "model/items/platform/Platform.h"
#include "model/items/brick/Brick.h"
#include <algorithm>
#include <cmath>

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

bool Ball::collided_by(Solid &s)
{
    float ball_x = this->get_position().at(0);
    float ball_y = this->get_position().at(1);
    if (auto platform = dynamic_cast<Platform *>(&s))
    {
        float top, left, bottom, right;
        top = platform->get_position().at(1) - platform->get_height() / 2;
        bottom = platform->get_position().at(0) + platform->get_height() / 2;
        left = platform->get_position().at(0) - platform->get_size() / 2;
        right = platform->get_position().at(1) + platform->get_size() / 2;

        float closest_x, closest_y;
        closest_x = std::clamp(ball_x, left, right);
        closest_y = std::clamp(ball_y, top, bottom);

        auto square = [](auto x)
        { return x * x; };

        if (std::sqrt(square(closest_x - ball_x) + square(closest_y - ball_y)) <= this->radius)
            return true;
    }

    else if (auto brick = dynamic_cast<Brick *>(&s))
    {
    }

    return false;
}

void Ball::resolve_collision(Solid &s)
{
    if (collided_by(s))
    {
        auto [dir_x, dir_y] = this->get_direction();

        while (collided_by(s))
        {
            auto [x, y] = this->get_position(); // stylé la feature

            set_position({x - dir_x, y - dir_y});
        }

        float new_dir_x = dir_x;
        float new_dir_y = -dir_y;

        set_direction({new_dir_x, new_dir_y});
    }
}