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
    unsigned int radius;

    // constructors and destructors
public:
    Ball();

    Ball(std::array<float, 2> direction, unsigned int radius);

    Ball(float dir_x, float dir_y, unsigned int radius);

    Ball(float pos_x, float pos_y, float dir_x, float dir_y, unsigned int radius);

    Ball(const Ball &other);

    ~Ball();

    // getters and setters
public:
    std::array<float, 2> get_direction();

    void set_direction(std::array<float, 2> new_pos);

    unsigned int get_radius() const;

    void set_radius(unsigned int new_radius);

    // tools
public:
    void move(float speed);

    void tick_time();

    bool collided_by(Solid &s) override;

    void resolve_collision(Solid &s);
};

#endif // BALL_H