#include <SDL2/SDL.h>
#include "model/bonus/Transformer.h"
#include "view/HomeScreen.h"

#include <iostream>

int main(int argc, char** argv)
{
    HomeScreen* homeScreen = new HomeScreen();
    homeScreen->run();
    SDL_Quit(); // ON SORT
    return 0;
}
