#ifndef BONUSPLATEFORM_H
#define BONUSPLATEFORM_H

#include "model/bonus/Transformer.h"

class TransformerPlateform : public Transformer
{
public:

    enum class Type : int
    {
        BIG = 0,
        LITTLE = 1
    };
    TransformerPlateform();
    TransformerPlateform(int posX, int posY);
    TransformerPlateform(const std::array<int, 2> &pos);
    TransformerPlateform(const TransformerPlateform &b); // copy constructor
    TransformerPlateform(const Transformer &b); // copy constructor
    ~TransformerPlateform();
};

#endif