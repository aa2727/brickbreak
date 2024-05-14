#include "view/itemView/GridView.h"
#include "view/itemView/BrickView.h"

void drawGrid(const std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> &renderer,const int width_window,const int height_window, const Grid &grid)
{
    float width = static_cast<float>(width_window) / grid.get_nb_columns();
    float height = static_cast<float>(height_window) / grid.get_nb_lines();
    //std::cout << "width: " << width << " height: " << height << std::endl;
    for (auto &brick : grid.get_grid())
    {
        drawBrick(renderer,width,height,*brick);
    }
}