#ifndef HOME_SCREEN_H
#define HOME_SCREEN_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <memory>
#include <string>
#include <iostream>

class HomeScreen
{
public:
    HomeScreen();
    ~HomeScreen();
    void init();
    void render();
    void handleEvent(const SDL_Event &e);
    void update();
    bool isRunning();
    void setRunning(bool running);
    void setRenderer(const SDL_Renderer &renderer);
    void setWindow(const SDL_Window &window);
    void setFont(TTF_Font &font);

private:
    bool running;
    std::unique_ptr<SDL_Window,decltype(&SDL_DestroyWindow)> window;
    std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> renderer;
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> background;
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> title;
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> playButton;
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> quitButton;

};

#endif // HOME_SCREEN_H