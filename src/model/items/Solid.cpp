#include "model/items/Solid.h"

#include <iostream>

Solid::Solid() {}

Solid::Solid(std::array<float, 2> pos)
{
    position = pos;
}

Solid::Solid(float pos_x, float pos_y)
{
    position = {pos_x, pos_y};
}

Solid::Solid(const Solid &other)
{
    position = other.position;
}

Solid::~Solid() {}

void Solid::set_position(std::array<float, 2> new_pos)
{
    position = new_pos;
}

std::array<float, 2> Solid::get_position()
{
    return position;
}

void Solid::collided_by(Solid &ball)
{
}