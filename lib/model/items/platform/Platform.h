#ifndef PLATFORM_H
#define PLATFORM_H

#include <iostream>
#include <array>
#include "./../Solid.h"

class Platform : public Solid
{
    // data members
private:
    std::array<float, 2> direction;
    int speed = 5;

    // constructors and destructors
public:
    Platform();

    Platform(std::array<float, 2> position, const float width, const float height);

    Platform(const float pos_x, const float pos_y, const float width, const float height);

    Platform(const float width, const float height);

    Platform(const Platform &other);

    ~Platform();

    // getters and setters
public:
    std::array<float, 2> get_direction();
    void set_direction(std::array<float, 2> new_dir);

    int get_speed();
    void set_speed(int new_speed);

    // tools
public:
    void movement();
    bool collided_by(Solid &ball) override;
};

#endif // PLATFORM_H