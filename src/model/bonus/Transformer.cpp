#include "model/bonus/Transformer.h"

// Class parent of every bonus or malus

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

/**
 * @brief get the position of the transformer
 * 
 * @return std::array<float,2> 
 */
std::array<float,2> Transformer::get_position() const
{
    std::cout << "Transformer position" << std::endl;
    std::cout << "x: " << this->position.at(0)  << std::endl;
    
    return this->position;
}

/**
 * @brief Make the transformer going down
 * 
 * @param speed the speed of the falling
 */
void Transformer::fall(const float speed)
{
    std::cout << "Transformer falling" << std::endl;
    position[1] += speed*this->direction[1];
}