#include "view/itemView/BallView.h"


void drawBall(const std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y)
{
    for (int w = 0; w < BALL_RADIUS * 2; w++)
    {
        for (int h = 0; h < BALL_RADIUS * 2; h++)
        {
            int dx = BALL_RADIUS - w;
            int dy = BALL_RADIUS - h;
            if ((dx*dx + dy*dy) <= (BALL_RADIUS * BALL_RADIUS))
            {
                SDL_RenderDrawPoint(renderer.get(), x + dx, y + dy);
            }
        }
    }
}