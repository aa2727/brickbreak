#include <SDL2/SDL.h>
#include "model/bonus/Transformer.h"
#include "view/MainWindow.h"

#include <iostream>

int main(int argc, char** argv)
{
    MainWindow* mainwindow = new MainWindow(); // Create the main window
    mainwindow->run(); // Start the main window
    SDL_Quit(); // Leave SDL
    return 0;
}
