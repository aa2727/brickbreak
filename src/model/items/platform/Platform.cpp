#include "model/items/platform/Platform.h"

Platform::Platform() {}

Platform::Platform(int size, int thickness)
{
    this->direction = {0., 0.};
    this->size = size;
    this->thickness = thickness;
}

Platform::Platform(const Platform &other)
{
    this->direction = other.direction;
    this->size = other.size;
    this->thickness = other.thickness;
}

Platform::Platform(std::array<float, 2> position, int size, int thickness)
{
    this->direction = {0., 0.};
    this->position = position;
    this->size = size;
    this->thickness = thickness;
}

Platform::Platform(float pos_x, float pos_y, int size, int thickness)
{
    this->direction = {0., 0.};
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

int Platform::get_speed()
{
    return this->speed;
}

void Platform::set_speed(int new_speed)
{
    this->speed = new_speed;
}

void Platform::movement(int width)
{
    this->position.at(0) += this->direction.at(0);

    auto [x, y] = this->get_position();
    if (x < 0 || x + this->get_size() > width)
    {
        std::cout << x << std::endl;
        this->position.at(0) -= this->direction.at(0);
    }
}
