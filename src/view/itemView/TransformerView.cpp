#include "view/itemView/TransformerView.h"


void drawTransformer(const std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y, const int radius)
{
    // Color in green the transformer
    SDL_SetRenderDrawColor(renderer.get(), 0, 225, 0, 255);
    for (int w = 0; w < radius * 2; w++)
    {
        for (int h = 0; h < radius * 2; h++)
        {
            int dx = radius - w;
            int dy = radius - h;
            if ((dx*dx + dy*dy) <= (radius * radius))
            {
                SDL_RenderDrawPoint(renderer.get(), x + dx, y + dy);
            }
        }
    }
}