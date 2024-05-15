#include "view/itemView/WallView.h"

/**
 * @brief Draw a wall
 * 
 * @param renderer current renderer of the window
 * @param wall wall to draw
 * @require renderer != nullptr && wall != nullptr
 */
void drawWall(const std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> &renderer, const Wall &wall)
{
    SDL_Rect rect;
    rect.x = wall.get_position()[0];
    rect.y = wall.get_position()[1];
    rect.w = wall.get_width();
    rect.h = wall.get_height();
    SDL_SetRenderDrawColor(renderer.get(), 0, 0, 0, 200);
    SDL_RenderFillRect(renderer.get(), &rect);

}