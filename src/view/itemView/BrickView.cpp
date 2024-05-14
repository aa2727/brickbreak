#include "view/itemView/BrickView.h"

void drawBrick(const std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> &renderer,const float width, const float height, const Brick &brick)
{
    SDL_Rect rect;
    rect.x = brick.get_position()[0];
    rect.y = brick.get_position()[1];
    rect.w = width;
    rect.h = height;
    SDL_SetRenderDrawColor(renderer.get(), 0, 0, 255, 255);
    SDL_RenderFillRect(renderer.get(), &rect);
    // black border
    SDL_SetRenderDrawColor(renderer.get(), 0, 0, 0, 255);
    SDL_RenderDrawRect(renderer.get(), &rect);
}