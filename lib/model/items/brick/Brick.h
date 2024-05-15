#ifndef BRICK_H
#define BRICK_H

#include <iostream>
#include <array>
#include "./../Solid.h"

class Brick : public Solid
{
    // data members
private:
    int hp;
    int side;

    // constructors and destructors
public:
    Brick();

    Brick(int hp, std::array<float, 2> position, int side);

    Brick(int hp, float pos_x, float pos_y, int side);

    Brick(int hp, float pos_x, float pos_y, float width, float height);

    Brick(const Brick &other);

    ~Brick();

    // getters and setters
public:
    int get_hp();

    void set_hp(int new_hp);

    int get_side() const;

    void set_side(int new_side);

    bool collided_by(Solid &ball) override;

    // tools
public:
};

#endif // BRICK_H