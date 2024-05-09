#ifndef WINDOW_H
#define WINDOW_H


#include <SDL2/SDL.h>
#include <memory>
#include <array>
#include <string>
#include <iostream>

class Window
{
    public:
        Window();
        ~Window();
        virtual void changeTo(std::unique_ptr<Window> window);
    protected:
        std::shared_ptr<SDL_Window> window;
};

#endif // WINDOW_H