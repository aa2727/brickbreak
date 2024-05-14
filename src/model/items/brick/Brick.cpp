#include "model/items/brick/Brick.h"

Brick::Brick() {}

Brick::Brick(int hp, std::array<float, 2> position, int side)
{
    this->hp = hp;
    this->position = position;
    this->side = side;
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

int Brick::get_hp()
{
    return this->hp;
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