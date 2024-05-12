#ifndef BALL_VIEW_H
#define BALL_VIEW_H

#include <SDL2/SDL.h>
#include <iostream>
#include <memory>

#define BALL_RADIUS 10

void drawBall(const std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y);


#endif // BALL_VIEW_H