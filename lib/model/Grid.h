#ifndef GRID_H
#define GRID_H

#include <array>

class Grid
{
public:
    Grid();
    Grid(const std::array<std::array<int,5>,5> &grid);
    Grid(const Grid &g); // copy constructor
    ~Grid();

    // getters

    std::array<std::array<int,5>,5> get_grid() const;

private:
    std::array<std::array<int,5>,5> grid;
    void init();
    void update();
    bool is_over();
    
};

#endif