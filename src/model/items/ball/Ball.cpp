#include "model/items/ball/Ball.h"
#include "model/items/platform/Platform.h"
#include "model/items/brick/Brick.h"
#include <algorithm>
#include <cmath>

Ball::Ball() {}

Ball::Ball(std::array<float, 2> direction, unsigned int radius)
{
    this->direction = direction;
    this->radius = radius;
}

Ball::Ball(float dir_x, float dir_y, unsigned int radius)
{
    this->direction = {dir_x, dir_y};
    this->radius = radius;
}

Ball::Ball(float pos_x, float pos_y, float dir_x, float dir_y, unsigned int radius)
{
    this->direction = {dir_x, dir_y};
    this->set_position({pos_x, pos_y});
    this->radius = radius;
}

Ball::Ball(const Ball &other)
{
    this->direction = other.direction;
    this->radius = other.radius;
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

unsigned int Ball::get_radius() const
{
    return this->radius;
}

void Ball::set_radius(unsigned int new_radius)
{
    this->radius = new_radius;
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

    float top, left, bottom, right;

    if (auto platform = dynamic_cast<Platform *>(&s))
    {
        top = platform->get_position().at(1);
        bottom = platform->get_position().at(1) + platform->get_thickness();
        left = platform->get_position().at(0);
        right = platform->get_position().at(0) + platform->get_size();

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
        top = brick->get_position().at(1);
        bottom = brick->get_position().at(1) + brick->get_side();
        left = brick->get_position().at(0);
        right = brick->get_position().at(0) + brick->get_side();

        float closest_x, closest_y;
        closest_x = std::clamp(ball_x, left, right);
        closest_y = std::clamp(ball_y, top, bottom);

        auto square = [](auto x)
        { return x * x; };

        if (std::sqrt(square(closest_x - ball_x) + square(closest_y - ball_y)) <= this->radius)
            return true;

        // auto [brick_x, brick_y] = brick->get_position();

        // // Calculate distance between ball center and brick center
        // double dx = ball_x - (brick_x + brick->get_side() / 2);
        // double dy = ball_y - (brick_y + brick->get_side() / 2);
        // double distance = sqrt(dx * dx + dy * dy);

        // // Calculate minimum distance for collision
        // double minDistance = this->get_radius() + brick->get_side() / 2;

        // // Check if there is a collision
        // if (distance <= minDistance)
        // {
        //     // Calculate the sign of the direction components
        //     double signX = std::signbit(ball.direction[0]) ? -1.0 : 1.0;
        //     double signY = std::signbit(ball.direction[1]) ? -1.0 : 1.0;

        //     // Update ball direction based on collision
        //     ball.direction[0] = signX * std::clamp(ball.direction[0], -1.0, 1.0); // Clamp x direction
        //     ball.direction[1] = signY * std::clamp(ball.direction[1], -1.0, 1.0); // Clamp y direction

        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
    }

    return false;
}

void Ball::resolve_collision(Solid &s)
{
    if (s.collided_by(*this))
    {
        std::cout << "Collision detected" << std::endl;
        auto [dir_x, dir_y] = this->get_direction();

        while (s.collided_by(*this))
        {
            auto [x, y] = this->get_position(); // stylé la feature

            set_position({x - dir_x, y - dir_y});
        }

        // PAS DE REBOND AVEC LE DESSOUS
        float new_dir_x = -dir_x;
        float new_dir_y = dir_y;

        // PAS DE REBOND AVEC LE COTE
        // float new_dir_x = -dir_x;
        // float new_dir_y = dir_y;

        set_direction({new_dir_x, new_dir_y});
    }
}