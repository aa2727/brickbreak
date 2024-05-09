#include "model/items/Solid.h"

#include <iostream>

Solid::Solid() {}

Solid::Solid(std::array<float, 2> pos)
{
    this->position = pos;
}

Solid::Solid(float pos_x, float pos_y)
{
    this->position = {pos_x, pos_y};
}

Solid::Solid(const Solid &other)
{
    this->position = other.position;
}

Solid::~Solid() {}

void Solid::set_position(std::array<float, 2> new_pos)
{
    this->position = new_pos;
}

std::array<float, 2> Solid::get_position()
{
    return this->position;
}

void Solid::collided_by(Solid &ball)
{
}