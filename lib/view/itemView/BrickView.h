#ifndef BRICK_VIEW_H
#define BRICK_VIEW_H


#include "model/items/brick/Brick.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <memory>

void drawBrick(const std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> &renderer,const float width, const float height, const Brick &brick);


#endif // BRICK_VIEW_H