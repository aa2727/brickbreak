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
    int thickness; // epaisseur
    int speed = 5;

    // constructors and destructors
public:
    Platform();

    Platform(std::array<float, 2> position, int size, int thickness);

    Platform(float pos_x, float pos_y, int size, int thickness);

    Platform( int size, int thickness);

    Platform(const Platform &other);

    ~Platform();

    // getters and setters
public:
    std::array<float, 2> get_direction();
    void set_direction(std::array<float, 2> new_dir);
    
    int get_size();
    void set_size(int new_size);
    
    int get_thickness();
    void set_thickness(int new_thick);

    int get_speed();
    void set_speed(int new_speed);


    // tools
public:
    void movement(int window_width);
};

#endif // PLATFORM_H