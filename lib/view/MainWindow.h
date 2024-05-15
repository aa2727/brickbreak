#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <SDL2/SDL.h>
#include "view/Screen.h"
#include "view/Window.h"
#include <memory>
#include <array>
#include <string>
#include <iostream>

/**
 * @brief the main window class that will be used to create the application window
 * 
 */
class MainWindow : public Window
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

    /**
     * @brief Change the screen to a new screen
     * 
     * 
     * @param screen the new screen
     */
    void changeTo(std::unique_ptr<Window> window) override;

private:
    bool running; // the running state of the window
    bool has_to_change; // If change to is called in order to avoid conflict with the event loop
    std::unique_ptr<Screen> screen; // the current screen
    std::unique_ptr<Screen> next_screen; // the next screen
};

#endif // MAIN_WINDOW_H