#ifndef Transformer_H
#define Transformer_H

#include <stdio.h>
#include <iostream>
#include <array>
#include <stdlib.h>

class Transformer
{

protected:
    std::array<int, 2> position;

public:
    // Constructors
    Transformer();
    Transformer(int posX, int posY);
    Transformer(const std::array<int, 2> &pos);
    // Destructor
    ~Transformer();
};
#endif