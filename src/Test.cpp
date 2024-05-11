#include <iostream>
#include <SDL2/SDL.h>

#include "model/items/platform/Platform.h"
#include "model/items/Solid.h"

int main()
{

    Platform *plat = new Platform({0, 0}, 10);

    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Create a window
    SDL_Window *window = SDL_CreateWindow("Arrow Key Detection", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    if (window == nullptr)
    {
        std::cerr << "Failed to create window: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    SDL_Surface *win_surf = SDL_GetWindowSurface(window);

    // Main event loop
    SDL_Event event;
    bool quit = false;
    while (!quit)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                quit = true;
            }

            else if (event.type == SDL_KEYDOWN)
            {
                switch (event.key.keysym.sym)
                {
                case SDLK_q:
                case SDLK_LEFT:
                    plat->movement(LEFT);
                    break;

                case SDLK_d:
                case SDLK_RIGHT:
                    plat->movement(RIGHT);
                    break;
                    // Add cases for other keys if needed
                }
            }
        }

        SDL_UpdateWindowSurface(window);
        SDL_Delay(16);
    }

    // Clean up
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
