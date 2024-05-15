#ifndef GRID_H
#define GRID_H

#include "model/items/Solid.h"
#include "model/items/brick/Brick.h"
#include "model/bonus/Transformer.h"
#include <vector>
#include <memory>
#include <iostream>

class Grid : public Solid
{

    private:
    int nb_lines;
    int nb_columns;
    int brick_width;
    int brick_height;
    std::unique_ptr<std::vector<std::shared_ptr<Brick>>> grid;
    std::vector<std::shared_ptr<Transformer>> transformers;

    public:
    Grid();
    Grid(std::array<float, 2> position, int size, int thickness, int nb_lines, int nb_columns);
    Grid(float pos_x, float pos_y, int size, int thickness, int nb_lines, int nb_columns);
    ~Grid();
    void init_grid();

    std::vector<std::shared_ptr<Brick>> get_grid() const;
    std::vector<std::shared_ptr<Transformer>> get_transformers() const;
    int get_nb_lines() const;
    int get_nb_columns() const;
    bool is_empty() const;
    bool collided_by(Solid &ball) override;


};
    

#endif // GRID_H