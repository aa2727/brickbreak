#include "model/items/ball/Ball.h"
#include "model/items/platform/Platform.h"
#include "model/items/brick/Brick.h"
#include <algorithm>
#include <cmath>

Ball::Ball() 
{
    this->direction = {0, 0};
    this->radius = 0;

}

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

void Ball::resolve_collision(Solid &s)
{
    if (s.collided_by(*this))
    {
        auto [dir_x, dir_y] = this->get_direction();

        while (s.collided_by(*this))
        {
            auto [x, y] = this->get_position();

            set_position({x - dir_x, y - dir_y});
        }

        float new_dir_x = dir_x;
        float new_dir_y = dir_y;

        if (this->get_position().at(0) < s.get_position()[0] || this->get_position().at(0) > s.get_position()[0] + s.get_width())
        {
            new_dir_x = -dir_x;
        }
        if (this->get_position().at(1) < s.get_position()[0] || this->get_position().at(1) > s.get_position()[0]+ s.get_height())
        {
            new_dir_y = -dir_y;
        }
    
        set_direction({new_dir_x, new_dir_y});
    }
}