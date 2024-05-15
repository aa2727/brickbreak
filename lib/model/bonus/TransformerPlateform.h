#ifndef BONUSPLATEFORM_H
#define BONUSPLATEFORM_H

#include "model/bonus/Transformer.h"

#define BONUSPLATEFORM_WIDTH 2
#define MALUSPLATEFORM_WIDTH 0.5

/**
 * @brief Class for the plateform transformer
 * 
 */

class TransformerPlateform : public Transformer
{
public:
    // Enum for the type of the transformer
    enum class Type : int
    {
        BIG = 0,
        LITTLE = 1
    };
    TransformerPlateform();
    TransformerPlateform(const std::array<int, 2> &pos);
    ~TransformerPlateform();

    /**
     * @brief get the type of the transformer
     * 
     * @return Type 
     */
    Type get_type() const;

private:
    Type type;


};

#endif