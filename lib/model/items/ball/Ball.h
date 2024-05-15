#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <array>
#include "./../Solid.h"

/**
 * @brief Class for the ball
 * 
 */

class Ball : public Solid
{
    // data members
private:
    std::array<float, 2> direction; // Direction of the ball
    unsigned int radius; // Size of the ball

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

    /**
     * @brief  Move the ball
     * 
     * @param speed  the speed of the ball
     */
    void move(float speed);

    /**
     * @brief  Tick the time for the bonus/malus on the ball
     * 
     */
    void tick_time();

    /**
     * @brief  Resolve the collision between the ball and a solid
     * 
     * @param s  the solid to resolve the collision with
     */
    void resolve_collision(Solid &s);
};

#endif // BALL_H