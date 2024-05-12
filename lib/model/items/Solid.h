#ifndef SOLID_H
#define SOLID_H

#include <iostream>
#include <array>

class Solid
{
    // data members
protected:
    std::array<float, 2> position;

    // Constructors and destructors
public:
    Solid();

    Solid(std::array<float, 2> position);

    Solid(float pos_x, float pos_y);

    Solid(const Solid &other);

    ~Solid();

    // getters and setters
public:
    void set_position(std::array<float, 2> new_pos);

    std::array<float, 2> get_position();

    // tools
public:
    void collided_by(Solid &ball);
};

#endif // SOLID_H