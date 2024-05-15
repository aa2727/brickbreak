#ifndef Transformer_H
#define Transformer_H

#include <iostream>
#include <array>

/**
 * @brief Class parent of every bonus or malus
 * 
 */
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

    /**
     * @brief Make the transformer going down
     * 
     * @param speed  the speed of the falling
     */
    void fall(const float speed);

    /**
     * @brief get the position of the transformer
     * 
     * @return std::array<float,2> 
     */
    std::array<float,2> get_position() const;

    /**
     * @brief get the direction of the transformer
     * 
     * @return std::array<float,2> 
     */
    std::array<float,2> get_direction() const;

};

#endif