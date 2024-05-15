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

/**
 * @brief Class for the home screen 
 * This class print the home screen
 * 
 */
class HomeScreen : public Screen
{
public:
    HomeScreen();
    ~HomeScreen();
    /**
     * @brief Initialize the home screen
     * 
     */
    void init() override;
    /**
     * @brief Handle the event for the home screen
     * 
     * @param e the event
     */
    void handleEvent(const SDL_Event &e) override;
    /**
     * @brief render the home screen
     * 
     */
    void render() override;
    /**
     * @brief Call the game model update
     * 
     */
    void update() override;

private:
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> title; // title texture
    SDL_Rect titleRectSrc, titleRectDest;
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> playButton; // play button texture
    SDL_Rect playButtonRectSrc, playButtonRectDest;
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> quitButton;  // quit button texture
    SDL_Rect quitButtonRectSrc,quitButtonRectDest;

};

#endif // HOME_SCREEN_H