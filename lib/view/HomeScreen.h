#ifndef HOME_SCREEN_H
#define HOME_SCREEN_H

#include "view/Screen.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <memory>
#include <array>
#include <string>
#include <iostream>

class HomeScreen : public Screen
{
public:
    HomeScreen();
    ~HomeScreen();
    void init() override;
    void handleEvent(const SDL_Event &e) override;
    void render() override;
    void update() override;

private:
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> title;
    SDL_Rect titleRectSrc, titleRectDest;
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> playButton;
    SDL_Rect playButtonRectSrc, playButtonRectDest;
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> quitButton;
    SDL_Rect quitButtonRectSrc,quitButtonRectDest;

};

#endif // HOME_SCREEN_H