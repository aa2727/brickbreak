#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <array>
#include "./../Solid.h"

class Ball : public Solid
{
    // data members
private:
    std::array<float, 2> direction;

    // constructors and destructors
public:
    Ball();

    Ball(std::array<float, 2> direction);

    Ball(float dir_x, float dir_y);

    Ball(const Ball &other);

    ~Ball();

    // getters and setters
public:
    std::array<float, 2> get_direction();

    void set_direction(std::array<float, 2> new_pos);

    // tools
public:
    void move(float speed);

    void tick_time();
};

#endif // BALL_H