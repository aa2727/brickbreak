#ifndef SCREEN_H
#define SCREEN_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include "view/Window.h"
#include <memory>
#include <array>
#include <string>
#include <iostream>

/**
 * @brief Class for the screen
 * This class is the base
 * 
 * 
 */
class Screen : public Window
{
public:
    Screen();
    ~Screen();
    virtual void init();
    virtual void render();
    virtual void handleEvent(const SDL_Event &e);
    virtual void update();

    /**
     * @brief Set the Parent object
     * 
     * @param parent 
     */
    virtual void setParent(std::shared_ptr<Window> parent);

    /**
     * @brief Set the Renderer object
     * 
     * @param renderer 
     */
    virtual void setRenderer(const SDL_Renderer &renderer);
    virtual void destroyRenderer();
    /**
     * @brief Set the Window object
     * 
     * @param window 
     */
    virtual void setWindow(std::shared_ptr<SDL_Window> window);
    virtual void setFont(const TTF_Font &font);


protected:
    std::shared_ptr<Window> parent; // the parent window
    std::unique_ptr<SDL_Renderer,decltype(&SDL_DestroyRenderer)> renderer; // the renderer
    std::unique_ptr<SDL_Texture,decltype(&SDL_DestroyTexture)> background; // the background texture

};


#endif // SCREEN_H