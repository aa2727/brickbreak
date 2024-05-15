#ifndef TransformerBall_H
#define TransformerBall_H

#include "model/bonus/Transformer.h"

/**
 * @brief Class for the ball transformer
 * 
 */
class TransformerBall : public Transformer
{
public:
// Enum for the type of the transformer
    enum class Type : int
    {
        MULTI = 0,// Multiball
        SUPER = 1// more damage to the brick
    };
    TransformerBall();
    TransformerBall(int posX, int posY);
    TransformerBall(const std::array<int,2> &pos);
    ~TransformerBall();

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