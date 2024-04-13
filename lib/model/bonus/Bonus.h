#ifndef Bonus_H
#define Bonus_H

#include <stdio.h>
#include <iostream>
#include <array>
#include <stdlib.h>

class Bonus
{

protected:
    std::array<int, 2> position;

public:
    // Constructeurs
    Bonus();
    Bonus(int posX, int posY);
    Bonus(const std::array<int, 2> &pos);
    // Destructeur
    ~Bonus();
};
#endif