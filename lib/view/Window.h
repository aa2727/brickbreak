#ifndef WINDOW_H
#define WINDOW_H


#include <SDL2/SDL.h>
#include <memory>
#include <array>
#include <string>
#include <iostream>

/**
 * @brief the window class that will be used to create the main window
 * 
 */
class Window
{
    public:
        Window();
        ~Window();
        

        /**
         * @brief Change the window to a new window
         * 
         * @param window the new window
         */
        virtual void changeTo(std::unique_ptr<Window> window);
    protected:
        std::shared_ptr<SDL_Window> window; // the window SDL encapsulated
};

#endif // WINDOW_H