#ifndef Transformer_H
#define Transformer_H

#include <iostream>
#include <array>

class Transformer
{

protected:
    std::array<float,2> position;
    std::array<float,2> direction;

public:
    // Constructors
    Transformer();
    Transformer(const float posX, const float posY);
    Transformer(const std::array<float,2> &pos);
    // Destructor
    ~Transformer();

    void fall(const float speed);
    std::array<float,2> get_position() const;
    std::array<float,2> get_direction() const;

};

#endif