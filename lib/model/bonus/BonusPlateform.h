#ifndef BONUSPLATEFORM_H
#define BONUSPLATEFORM_H

#include "model/bonus/Bonus.h"

class BonusPlateform : public Bonus
{
public:
    BonusPlateform();
    BonusPlateform(int posX, int posY);
    BonusPlateform(const std::array<int, 2> &pos);
    BonusPlateform(const BonusPlateform &b); // copy constructor
    BonusPlateform(const Bonus &b); // copy constructor
    ~BonusPlateform();
};

#endif