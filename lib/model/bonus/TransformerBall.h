#ifndef TransformerBall_H
#define TransformerBall_H

#include "model/bonus/Transformer.h"

class TransformerBall : public Transformer
{
public:
    enum class Type : int
    {
        MULTI = 0,
        SUPER = 1
    };
    TransformerBall();
    TransformerBall(int posX, int posY);
    TransformerBall(const std::array<int, 2> &pos);
    ~TransformerBall();
};

#endif