#include "view/itemView/GridView.h"
#include "view/itemView/BrickView.h"

void drawGrid(const std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y,const int width_window,const int height_window, const Grid &grid)
{
    float width = static_cast<float>(width_window) / grid.get_nb_columns();
    float height = static_cast<float>(height_window) / grid.get_nb_lines();
    for (auto &brick : grid.get_grid())
    {
        drawBrick(renderer, x + brick->get_position()[0], y + brick->get_position()[1],width,height,*brick);
    }
}