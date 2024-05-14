#include "view/itemView/BrickView.h"

void drawBrick(const std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y, const Brick &brick)
{
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = brick.get_side();
    rect.h = brick.get_side();
    SDL_SetRenderDrawColor(renderer.get(), 0, 0, 255, 255);
    SDL_RenderFillRect(renderer.get(), &rect);
}