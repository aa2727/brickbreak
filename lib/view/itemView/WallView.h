#ifndef BRICK_VIEW_H
#define BRICK_VIEW_H


#include "model/items/wall/Wall.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <memory>

/**
 * @brief draw the wall
 * 
 * @param renderer the renderer
 * @param wall the wall
 */
void drawWall(const std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> &renderer, const Wall &wall);


#endif // BRICK_VIEW_H