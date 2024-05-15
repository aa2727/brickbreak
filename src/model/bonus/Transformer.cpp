#include "model/bonus/Transformer.h"

// Constructor definitions

Transformer::Transformer()
{
    position = {0, 0};
}

Transformer::Transformer(int posX, int posY)
{
    position = {posX, posY};
    direction = {0, 1};
}

Transformer::Transformer(const std::array<int, 2> &pos)
{
    position = pos;
}

// Destructor definition

Transformer::~Transformer()
{
    // nothing to do
}

void Transformer::fall(const float speed)
{
    position[1] += speed*this->direction[1];
}