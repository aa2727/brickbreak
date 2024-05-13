#include "model/items/platform/Platform.h"

Platform::Platform() {}

Platform::Platform(std::array<float, 2> direction, int size)
{
    this->direction = direction;
    this->size = size;
}

Platform::Platform(const Platform &other)
{
    this->direction = other.direction;
    this->size = other.size;
}

Platform::~Platform() {}

std::array<float, 2> Platform::get_direction()
{
    return this->direction;
}

Platform::Platform(float dir_x, float dir_y, int size)
{
    this->direction = {dir_x, dir_y};
    this->size = size;
}

Platform::Platform(std::array<float, 2> direction, std::array<float, 2> position, int size)
{
    this->direction = direction;
    this->position = position;
    this->size = size;
}

Platform::Platform(float dir_x, float dir_y, float pos_x, float pos_y, int size)
{
    this->direction = {dir_x, dir_y};
    this->position = {pos_x, pos_y};
    this->size = size;
}

int Platform::get_size()
{
    return this->size;
}

void Platform::set_direction(std::array<float, 2> new_dir)
{
    this->direction = new_dir;
}

void Platform::set_size(int new_size)
{
    this->size = new_size;
}

void Platform::set_x_position(float x)
{
    this->direction.at(0) = x;
}

int Platform::get_height()
{
    return this->height;
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
