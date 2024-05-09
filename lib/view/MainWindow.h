#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include "view/Screen.h"
#include <memory>
#include <array>
#include <string>
#include <iostream>

class MainWindow
{
public:
    MainWindow();
    ~MainWindow();
    void init();
    void render();
    void handleEvent(const SDL_Event &e);
    void update();
    void run();
    bool isRunning();
    void setScreen(std::unique_ptr<Screen> screen);
    void setScreen();
    void setRunning(bool running);
    void setRenderer(const SDL_Renderer &renderer);
    void setWindow(const SDL_Window &window);
    void getWindow();
    void setFont(TTF_Font &font);

private:
    bool running;
    std::shared_ptr<SDL_Window> window;
    std::unique_ptr<Screen> screen;
};

#endif // MAIN_WINDOW_H