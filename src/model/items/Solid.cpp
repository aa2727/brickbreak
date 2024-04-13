#include "model/items/Solid.h"

#include <iostream>

Solid::Solid() {}

Solid::Solid(std::array<int, 2> position) {
    this->position = position;
}

Solid::Solid(int pos_x, int pos_y) {
    
}

Solid::Solid(const Solid &other) {}

Solid::~Solid() {}