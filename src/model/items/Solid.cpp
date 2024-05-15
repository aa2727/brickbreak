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

Solid::Solid(float pos_x, float pos_y, float width, float height)
{
    this->position = {pos_x, pos_y};
    this->width = width;
    this->height = height;
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

std::array<float, 2> Solid::get_position() const
{
    return this->position;
}

bool Solid::collided_by(Solid &ball)
{
    return false;
}

bool Solid::operator<(const Solid &other) const
{
    return std::strcmp(typeid(this).name(), typeid(&other).name()) < 0;
}

float Solid::get_width() const
{
    return this->width;
}

float Solid::get_height() const
{
    return this->height;
}