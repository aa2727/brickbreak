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
    int size; // taille globale
    int height = 2;

    // constructors and destructors
public:
    Platform();

    Platform(std::array<float, 2> direction,std::array<float, 2> position, int size);

    Platform(float dir_x, float dir_y, float pos_x, float pos_y, int size);

    Platform(std::array<float, 2> direction, int size);

    Platform(float dir_x, float dir_y, int size);

    Platform(const Platform &other);

    ~Platform();

    // getters and setters
public:
    std::array<float, 2> get_direction();

    int get_size();

    void set_direction(std::array<float, 2> new_dir);

    int get_height();

    void set_size(int new_size);

    void set_x_position(float x);

    // tools
public:
    void movement(int direction);
};

#endif // PLATFORM_H