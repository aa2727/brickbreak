#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <array>
#include "./../../Solid.h"

class Ball : public Solid
{
    // data members
private:
    std::array<int, 2> direction;

    // constructors and destructors
public:
    Ball();

    Ball(std::array<int, 2> direction);

    Ball(int dir_x, int dir_y);

    Ball(const Ball &other);

    ~Ball();

    // getters and setters
public:
    std::array<int, 2> get_direction();

    void set_direction(std::array<int, 2>);

    // tools
public:
    void move();

    void tick_time();
};

#endif // BALL_H