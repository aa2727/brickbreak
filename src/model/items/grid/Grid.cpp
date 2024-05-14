#include "model/items/grid/Grid.h"

Grid::Grid() : grid(nullptr)
{
    Grid({0, 0}, 0, 0, 5, 5);
}

Grid::Grid(std::array<float, 2> position, int size, int thickness, int nb_lines, int nb_columns) : Solid(position)
{
    this->nb_lines = nb_lines;
    this->nb_columns = nb_columns;
    this->init_grid();
}

Grid::Grid(float pos_x, float pos_y, int size, int thickness, int nb_lines, int nb_columns) : Solid(pos_x, pos_y)
{
    this->nb_lines = nb_lines;
    this->nb_columns = nb_columns;
    this->init_grid();
}

Grid::~Grid()
{
}

void Grid::init_grid()
{
    this->grid = std::make_unique<std::vector<std::vector<std::shared_ptr<Brick>>>>(this->nb_lines, std::vector<std::shared_ptr<Brick>>(this->nb_columns));
    for (int i = 0; i < this->nb_lines; i++)
    {
        for (int j = 0; j < this->nb_columns; j++)
        {
            this->grid.get()->at(i).at(j) = std::make_shared<Brick>(1, 50.*j, 50.*i, 50);
        }
    }
}

std::vector<std::vector<std::shared_ptr<Brick>>> Grid::get_grid() const
{
    return *this->grid;
}