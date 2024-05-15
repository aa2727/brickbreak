#ifndef BRICK_H
#define BRICK_H

#include <iostream>
#include <array>
#include "./../Solid.h"

/**
 * @brief Class for the brick
 * 
 */
class Brick : public Solid
{
    // data members
private:
    int col; // Column index of the brick
    int row; // Row index of the brick
    int hp; // Health points of the brick
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
    int get_hp() const;

    int get_col();

    int get_row();

    void set_hp(int new_hp);

    int get_side() const;

    void set_side(int new_side);

    /**
     * @brief call when the brick is hit by a ball
     * 
     */
    virtual void hit_by_ball();

    /**
     * @brief call when the brick is hit by a ball
     * 
     */
    bool collided_by(Solid &ball) override;

    // tools
public:
};

#endif // BRICK_H