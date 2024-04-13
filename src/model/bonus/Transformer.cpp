#include "model/bonus/Transformer.h"

// Constructor definitions

Transformer::Transformer()
{
    position = {0, 0};
}

Transformer::Transformer(int posX, int posY)
{
    position = {posX, posY};
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