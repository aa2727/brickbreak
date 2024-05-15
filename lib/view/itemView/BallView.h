#ifndef BALL_VIEW_H
#define BALL_VIEW_H

#include <SDL2/SDL.h>
#include <iostream>
#include <memory>

/**
 * @brief draw the ball
 * 
 * @param renderer the renderer
 * @param x the x position of the ball
 * @param y the y position of the ball
 * @param radius the radius of the ball
 */
void drawBall(const std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y, const int radius);


#endif // BALL_VIEW_H