#ifndef SOLID_H
#define SOLID_H

#define LEFT 1
#define RIGHT 2

#include <iostream>
#include <array>
#include <cstring>

class Solid
{
    // data members
protected:
    std::array<float, 2> position;
    float width;
    float height;

    // Constructors and destructors
public:
    Solid();

    Solid(std::array<float, 2> position);

    Solid(const float pos_x, const float pos_y);

    Solid(const float pos_x, const float pos_y, const float width, const float height);

    Solid(const Solid &other);

    ~Solid();

    // getters and setters
public:
    void set_position(std::array<float, 2> new_pos);

    std::array<float, 2> get_position() const;

    float get_width() const;

    float get_height() const;

    // tools
public:
    virtual bool collided_by(Solid &ball);

    bool operator<(const Solid &other) const;
};

#endif // SOLID_H