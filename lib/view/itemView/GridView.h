#ifndef GRID_VIEW_H
#define GRID_VIEW_H

#include "model/items/grid/Grid.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <memory>

/**
 * @brief draw the grid
 * 
 * @param renderer the renderer
 * @param width_win the width of the window
 * @param height_win the height of the window
 * @param grid the grid
 */
void drawGrid(const std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> &renderer, const int width_win, const int height_win, const Grid &grid);

#endif // GRID_VIEW_H