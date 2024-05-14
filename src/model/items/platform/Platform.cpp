#include "model/items/platform/Platform.h"

Platform::Platform() {}

Platform::Platform(std::array<float, 2> direction, int size, int thickness)
{
    this->direction = direction;
    this->size = size;
    this->thickness = thickness;
}

Platform::Platform(const Platform &other)
{
    this->direction = other.direction;
    this->size = other.size;
    this->thickness = other.thickness;
}

Platform::Platform(float dir_x, float dir_y, int size, int thickness)
{
    this->direction = {dir_x, dir_y};
    this->size = size;
    this->thickness = thickness;
}

Platform::Platform(std::array<float, 2> direction, std::array<float, 2> position, int size, int thickness)
{
    this->direction = direction;
    this->position = position;
    this->size = size;
    this->thickness = thickness;
}

Platform::Platform(float dir_x, float dir_y, float pos_x, float pos_y, int size, int thickness)
{
    this->direction = {dir_x, dir_y};
    this->position = {pos_x, pos_y};
    this->size = size;
    this->thickness = thickness;
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

int Platform::get_size()
{
    return this->size;
}
void Platform::set_size(int new_size)
{
    this->size = new_size;
}

int Platform::get_thickness()
{
    return this->thickness;
}

void Platform::set_thickness(int new_thick)
{
    this->thickness = new_thick;
}

void Platform::movement(int direction)
{
    switch (direction)
    {
    case LEFT:
        this->position.at(0) -= this->direction.at(0);
        break;

    case RIGHT:
        this->position.at(0) += this->direction.at(0);
        break;

    default:
        break;
    }
}
