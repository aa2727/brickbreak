#ifndef TRANSFORMER_VIEW_H
#define TRANSFORMER_VIEW_H

#include <SDL2/SDL.h>
#include <iostream>
#include <memory>

/**
 * @brief draw the transformer
 * 
 * @param renderer the renderer
 * @param x the x position of the transformer
 * @param y the y position of the transformer
 * @param radius the radius of the transformer
 */
void drawTransformer(const std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y, const int radius);


#endif // TRANSFORMER_VIEW_H