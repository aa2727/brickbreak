#ifndef GRID_H
#define GRID_H

#include <memory>
#include <vector>
#include "model/items/brick/Brick.h"

class Grid
{

public:
    Grid();
    Grid(int rows, int cols);
    Grid(std::shared_ptr<std::vector<std::shared_ptr<Brick>>> bricks);
    ~Grid();

    std::shared_ptr<std::vector<std::shared_ptr<Brick>>> get_bricks();
    bool is_empty();

private:
    std::shared_ptr<std::vector<std::shared_ptr<Brick>>> bricks;
};


#endif // GRID_H