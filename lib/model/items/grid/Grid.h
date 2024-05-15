#ifndef GRID_H
#define GRID_H

#include "model/items/Solid.h"
#include "model/items/brick/Brick.h"
#include "model/bonus/Transformer.h"
#include <vector>
#include <memory>
#include <iostream>

/**
 * @brief Class for the grid that contains the bricks and the bonus/malus
 * 
 */
class Grid : public Solid
{

    private:
    int nb_lines; // Number of lines in the grid
    int nb_columns; // Number of columns in the grid
    int brick_width; // Width of a brick
    int brick_height; // Height of a brick
    std::unique_ptr<std::vector<std::shared_ptr<Brick>>> grid; // Grid of bricks
    std::vector<std::shared_ptr<Transformer>> transformers; // List of bonus/malus

    public:
    Grid();
    Grid(std::array<float, 2> position, int size, int thickness, int nb_lines, int nb_columns);
    Grid(float pos_x, float pos_y, int size, int thickness, int nb_lines, int nb_columns);
    ~Grid();
    /**
     * @brief Initialize the grid with bricks
     * 
     */
    void init_grid();

    std::vector<std::shared_ptr<Brick>> get_grid() const;
    std::vector<std::shared_ptr<Transformer>> get_transformers() const;
    int get_nb_lines() const;
    int get_nb_columns() const;

    /**
     * @brief Check if every brick is destroyed
     * 
     * @return true 
     * @return false 
     */
    bool is_empty() const;

    /**
     * @brief Handle the collision between the ball and the bricks
     * 
     * @param ball the ball
     * @return true if the ball hit a brick
     * @return false if the ball didn't hit a brick
     */
    bool collided_by(Solid &ball) override;


};
    

#endif // GRID_H