#include "model/Grid.h"


// Constructor definitions

Grid::Grid()
{
    // nothing to do
}

Grid::Grid(const std::array<std::array<int,5>,5> &grid)
{
    this->grid = grid;
}

// Copy constructor definition
Grid::Grid(const Grid &g)
{
    this->grid = g.grid;
}

// Destructor definition
Grid::~Grid()
{
    // nothing to do
}

// method definitions

std::array<std::array<int,5>,5> Grid::get_grid() const
{
    return this->grid;
}

// TODO: implement 
bool Grid::is_over()
{
    // iterate over the grid and check if there are any non zero cells
    // check if the game is over
    return true;
}