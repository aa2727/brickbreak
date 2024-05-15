#ifndef TransformerBall_H
#define TransformerBall_H

#include "model/bonus/Transformer.h"

class TransformerBall : public Transformer
{
public:
    enum class Type : int
    {
        MULTI = 0,// Multiball
        SUPER = 1// more damage to the brick
    };
    TransformerBall();
    TransformerBall(int posX, int posY);
    TransformerBall(const std::array<int,2> &pos);
    ~TransformerBall();
    Type get_type() const;

    private:
    Type type;
};

#endif