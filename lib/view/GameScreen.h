#ifndef GAME_SCREEN_H
#define GAME_SCREEN_H

#include "view/Screen.h"
#include "model/items/Solid.h"
#include "model/Game.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <memory>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

#define PLATFORM_POS_X 255.0
#define PLATFORM_POS_Y 480.0

#define WINDOW_WIDTH 700
#define WINDOW_HEIGHT 900

/**
 * @brief Class for the game screen 
 * This class is the main class of the game screen
 * Handle the game screen logic for the game
 * 
 */
class GameScreen : public Screen
{
public:
    int count = 0; // nombre de touche pressée

    GameScreen();
    ~GameScreen();
    /**
     * @brief Initialize the game screen
     * 
     */
    void init() override;

    /**
     * @brief Handle the event for the game screen
     * 
     * @param e the event
     */
    void handleEvent(const SDL_Event &e) override;

    /**
     * @brief render the game screen
     * 
     */
    void render() override;

    /**
     * @brief Call the game model update
     * 
     */
    void update() override;

// Draw functions
    void drawPlatform();
    void drawBalls();
    void drawTransformers();
    void drawScreenGrid();
    void drawWalls();

private:
    std::unique_ptr<Game> game; // The game model
};

#endif // GAME_SCREEN_H