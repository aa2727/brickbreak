#include "view/HomeScreen.h"

HomeScreen::HomeScreen() : running(true),
                         window(nullptr, SDL_DestroyWindow),
                         renderer(nullptr, SDL_DestroyRenderer), 
                         background(nullptr, SDL_DestroyTexture), 
                         title(nullptr, SDL_DestroyTexture), 
                         playButton(nullptr, SDL_DestroyTexture), 
                         quitButton(nullptr, SDL_DestroyTexture)
{
    // nothing to do
}