#ifndef GRID_VIEW_H
#define GRID_VIEW_H

#include "model/items/grid/Grid.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <memory>

void drawGrid(const std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y,const int width_win, const int height_win, const Grid& grid);


#endif // GRID_VIEW_H