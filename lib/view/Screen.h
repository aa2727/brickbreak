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
    virtual void init();
    virtual void render();
    virtual void handleEvent(const SDL_Event &e);
    virtual void update();
    virtual void setRenderer(const SDL_Renderer &renderer);
    virtual void setWindow(std::shared_ptr<SDL_Window> window);
    virtual void setFont(TTF_Font &font);

protected:
    std::shared_ptr<SDL_Window> window;
    std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> renderer;
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> background;

};


#endif // SCREEN_H