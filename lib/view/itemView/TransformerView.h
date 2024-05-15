#ifndef TRANSFORMER_VIEW_H
#define TRANSFORMER_VIEW_H

#include <SDL2/SDL.h>
#include <iostream>
#include <memory>

void drawTransformer(const std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> &renderer, const float x, const float y, const int radius);


#endif // TRANSFORMER_VIEW_H