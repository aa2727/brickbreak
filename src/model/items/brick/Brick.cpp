#include "model/items/brick/Brick.h"
#include "model/items/ball/Ball.h"
#include <algorithm>
#include <cmath>

Brick::Brick() {}

Brick::Brick(int hp, std::array<float, 2> position, int side)
{
    this->hp = hp;
    this->position = position;
    this->side = side;
}

Brick::Brick(int hp, float pos_x, float pos_y, float width, float height)
{
    this->hp = hp;
    this->position = {pos_x, pos_y};
    this->width = width;
    this->height = height;
}

Brick::Brick(int hp, float pos_x, float pos_y, int side)
{
    this->hp = hp;
    this->position = {pos_x, pos_y};
    this->side = side;
}

Brick::Brick(const Brick &other)
{
    this->hp = other.hp;
    this->position = other.position;
    this->side = other.side;
}

Brick::~Brick()
{
    std::cout << "Brick destroyed" << std::endl;
}

int Brick::get_hp() const
{
    return this->hp;
}

int Brick::get_col()
{
    return this->col;
}

int Brick::get_row()
{
    return this->row;
}

void Brick::set_hp(int new_hp)
{
    this->hp = new_hp;
}

int Brick::get_side() const
{
    return this->side;
}

void Brick::set_side(int new_side)
{
    this->side = new_side;
}

bool Brick::collided_by(Solid &ball)
{
    //std::cout << "Brick collided by ball" << std::endl;
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

void Brick::hit_by_ball()
{
    this->hp--;
}