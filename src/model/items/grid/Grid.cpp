#include "model/items/grid/Grid.h"

Grid::Grid() : grid(nullptr)
{
    Grid({0, 0}, 0, 0, 5, 5);
    this->init_grid();
}

Grid::Grid(std::array<float, 2> position, const int width, const int height, const int nb_lines, const int nb_columns) : Solid(position)
{
    this->nb_lines = nb_lines;
    this->nb_columns = nb_columns;
    this->brick_width = width/nb_columns;
    this->brick_height = height/nb_lines;
    this->init_grid();
}

Grid::Grid(const float pos_x, const float pos_y, const int width, const int height, const int nb_lines, const int nb_columns) : Solid(pos_x, pos_y)
{
    this->nb_lines = nb_lines;
    this->nb_columns = nb_columns;
    this->brick_width = width/nb_columns;
    this->brick_height = height/nb_lines;
    std::cout << "Grid created" << "width: " << width/nb_columns << "height: " << height/nb_lines << std::endl;
    this->init_grid();
}

Grid::~Grid()
{
    std::cout << "Grid destroyed" << std::endl;
}

void Grid::init_grid()
{
    this->grid = std::make_unique<std::vector<std::shared_ptr<Brick>>>(this->nb_lines*this->nb_columns, std::shared_ptr<Brick>());
    for (int i = 0; i < this->nb_lines; i++)
    {
        for (int j = 0; j < this->nb_columns; j++)
        {
            //std::cout << "Brick created" << "line: " << i << "column: " << j << j*this->brick_width<< "," << i*this->brick_height << std::endl;
            this->grid->at(i*this->nb_columns + j) = std::make_shared<Brick>(1, j*this->brick_width, i*this->brick_height, this->brick_width, this->brick_height);
        }
    }
}

std::vector<std::shared_ptr<Brick>> Grid::get_grid() const
{
    return *this->grid;
}

int Grid::get_nb_lines() const
{
    return this->nb_lines;
}

int Grid::get_nb_columns() const
{
    return this->nb_columns;
}

bool Grid::is_empty() const
{
    for (auto &brick : *this->grid)
    {
        if (brick->get_hp() > 0)
        {
            return false;
        }
    }
    return true;
}

bool Grid::collided_by(Solid &ball)
{
    for (auto &brick : *this->grid)
    {
        if (brick->get_hp() > 0 && brick->collided_by(ball))
        {
            brick->set_hp(brick->get_hp() - 1);
            return true;
        }
    }
    return false;
}