#ifndef BONUSPLATEFORM_H
#define BONUSPLATEFORM_H

#include "model/bonus/Transformer.h"

#define BONUSPLATEFORM_WIDTH 2
#define MALUSPLATEFORM_WIDTH 0.5
class TransformerPlateform : public Transformer
{
public:
    enum class Type : int
    {
        BIG = 0,
        LITTLE = 1
    };
    TransformerPlateform();
    TransformerPlateform(const std::array<int, 2> &pos);
    ~TransformerPlateform();
    Type get_type() const;

private:
    Type type;


};

#endif