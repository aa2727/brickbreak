#ifndef SCREEN_H
#define SCREEN_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <memory>
#include <array>
#include <string>
#include <iostream>

class Screen
{
public:
    Screen();
    ~Screen();
    void init();
    void render();
    void handleEvent(const SDL_Event &e);
    void update();
    void setRenderer(const SDL_Renderer &renderer);
    void setWindow(const SDL_Window &window);
    void setFont(TTF_Font &font);

private:
    std::unique_ptr<SDL_Window,decltype(&SDL_DestroyWindow)> window;
    std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> renderer;
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> background;

};


#endif // SCREEN_H