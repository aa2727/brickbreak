#include <SDL2/SDL.h>
#include "model/bonus/Transformer.h"
#include "view/MainWindow.h"

#include <iostream>

int main(int argc, char** argv)
{
    MainWindow* mainwindow = new MainWindow();
    mainwindow->run();
    SDL_Quit(); // ON SORT
    return 0;
}
