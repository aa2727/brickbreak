#ifndef BRICK_H
#define BRICK_H

#include <iostream>
#include <array>
#include "./../Solid.h"

class Brick : public Solid
{
    // data members
private:
    int col;
    int row;
    int hp;

    // constructors and destructors
public:
    Brick();

    Brick(int hp);

    Brick(const Brick &other);

    ~Brick();

    // getters and setters
public:
    int get_hp();

    int get_col();

    int get_row();

    void set_hp(int new_hp);

    // tools
public:
};

#endif // BRICK_H