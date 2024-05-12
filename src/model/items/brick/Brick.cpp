#include "model/items/brick/Brick.h"

Brick::Brick() {}

Brick::Brick(int hp)
{
    this->hp = hp;
}

Brick::Brick(const Brick &other)
{
    this->hp = other.hp;
}

Brick::~Brick() {}

int Brick::get_hp()
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