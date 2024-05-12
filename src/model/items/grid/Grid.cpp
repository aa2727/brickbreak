#include "model/items/grid/Grid.h"

Grid::Grid() : bricks(nullptr)
{
}

Grid::Grid(int rows, int cols)
{
    bricks = std::make_shared<std::vector<std::shared_ptr<Brick>>>();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            bricks->push_back(std::make_shared<Brick>(i));
        }
    }
}

Grid::Grid(std::shared_ptr<std::vector<std::shared_ptr<Brick>>> bricks) : bricks(std::move(bricks))
{
}

Grid::~Grid()
{
}

std::shared_ptr<std::vector<std::shared_ptr<Brick>>> Grid::get_bricks()
{
    return std::move(bricks);
}

bool Grid::is_empty()
{
    for (auto brick : *bricks)
    {
        if (!brick->get_hp() > 0)
        {
            return false;
        }
    }
    return true;
}