#ifndef BonusBall_H
#define BonusBall_H

#include "model/bonus/Bonus.h"

class BonusBall : public Bonus
{
public:
    BonusBall();
    BonusBall(int posX, int posY);
    BonusBall(const std::array<int, 2> &pos);
    BonusBall(const BonusBall &b); // copy constructor
    BonusBall(const Bonus &b); // copy constructor
    ~BonusBall();
};

#endif