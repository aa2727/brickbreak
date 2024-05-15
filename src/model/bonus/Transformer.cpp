#include "model/bonus/Transformer.h"

// Constructor definitions

Transformer::Transformer()
{
    std::cout << "Transformer created def" << std::endl;
    this->position = {0, 0};
}

Transformer::Transformer(float posX, float posY)
{
    std::cout << "Transformer created" << std::endl;
    this->position = std::array<float,2>{posX, posY};
    direction = {0, 1};
    std::cout << "x: " << this->position.at(0) << "y: " << this->position.at(1) << std::endl;
}

Transformer::Transformer(const std::array<float,2> &pos)
{
    std::cout << "Transformer created diff" << std::endl;
    this->position = pos;
}


// Destructor definition

Transformer::~Transformer()
{
    std::cout << "Transformer destroyed" << std::endl;
}

// Getter definitions

std::array<float,2> Transformer::get_position() const
{
    std::cout << "Transformer position" << std::endl;
    std::cout << "x: " << this->position.at(0)  << std::endl;
    
    return this->position;
}

void Transformer::fall(const float speed)
{
    std::cout << "Transformer falling" << std::endl;
    position[1] += speed*this->direction[1];
}