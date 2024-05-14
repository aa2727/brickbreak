#include "view/itemView/GridView.h"
#include "view/itemView/BrickView.h"

void drawGrid(const std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y, const Grid &grid)
{
    for (int i = 0; i < grid.get_grid().size(); i++)
    {
        for (int j = 0; j < grid.get_grid().at(i).size(); j++)
        {
            drawBrick(renderer, x + j * grid.get_grid().at(i).at(j)->get_side(), y + i * grid.get_grid().at(i).at(j)->get_side(), *grid.get_grid().at(i).at(j));
        }
    }
}