#include "view/itemView/GridView.h"
#include "view/itemView/BrickView.h"

void drawGrid(const std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y, const Grid &grid)
{
    //std::cout << "drawGrid" << std::endl;
    //std::cout << "grid.get_grid().size(): " << grid.get_grid().capacity() << std::endl;
    for (auto &brick : grid.get_grid())
    {
        drawBrick(renderer, x + brick->get_position()[0], y + brick->get_position()[1], *brick);
    }
}