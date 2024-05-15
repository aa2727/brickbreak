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
    std::array<int, 2> direction;

public:
    // Constructors
    Transformer();
    Transformer(const int posX, const int posY);
    Transformer(const std::array<int, 2> &pos);
    // Destructor
    ~Transformer();

    void fall(const float speed);
    std::array<int, 2> get_position() const;
    std::array<int, 2> get_direction() const;

};

#endif