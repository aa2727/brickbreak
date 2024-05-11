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

void Platform::movement(int direction)
{
    switch (direction)
    {
    case LEFT:
        std::cerr << "LEFT !" << std::endl;
        break;

    case RIGHT:
        std::cerr << "RIGHT !" << std::endl;
        break;
    
    default:
        break;
    }
}
