#include "lib/model/bonus/Bonus.h"

// Definition des constructeurs

Bonus::Bonus()
{
    position = {0, 0};
}

Bonus::Bonus(int posX, int posY)
{
    position = {posX, posY};
}

Bonus::Bonus(const std::array<int, 2> &pos)
{
    position = pos;
}