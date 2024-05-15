#include "view/GameScreen.h"
#include "view/itemView/BallView.h"
#include "view/itemView/GridView.h"
#include "model/bonus/TransformerBall.h"
#include "view/itemView/TransformerView.h"
#include "view/itemView/WallView.h"

GameScreen::GameScreen() : game(nullptr)
{
    // nothing to do
}

GameScreen::~GameScreen()
{
    // nothing to do
}

void GameScreen::init()
{
    this->renderer = std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)>(SDL_CreateRenderer(this->window.get(), -1, 0), SDL_DestroyRenderer);
    if (this->renderer == nullptr)
    {
        std::cerr << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        exit(1);
    }
    this->game = std::make_unique<Game>(WINDOW_WIDTH, WINDOW_HEIGHT);
    this->game->init();
}

void GameScreen::handleEvent(const SDL_Event &e)
{
    if (e.type == SDL_KEYDOWN)
    {
        auto [p_x, p_y] = this->game->get_platform().get_position();
        switch (e.key.keysym.sym)
        {
        case SDLK_LEFT:
            this->game->get_platform().set_direction({-(float)(this->game->get_platform().get_speed()), 0});
            break;

        case SDLK_RIGHT:
            this->game->get_platform().set_direction({(float)(this->game->get_platform().get_speed()), 0});
            break;
        }
    }
    else if (e.type == SDL_KEYUP)
    {
        this->game->get_platform().set_direction({0, 0});
    }

    if (e.type == SDL_MOUSEMOTION)
    {
        int mouse_x, mouse_y;
        Uint32 mouseState = SDL_GetMouseState(&mouse_x, &mouse_y);

        auto [p_x, p_y] = this->game->get_platform().get_position();
        this->game->get_platform().set_position({(float)(mouse_x - this->game->get_platform().get_width() / 2), p_y});
    }
}

void GameScreen::render()
{
    SDL_SetRenderDrawColor(this->renderer.get(), 133, 133, 133, 255);
    SDL_RenderClear(this->renderer.get());
    this->drawWalls();
    this->drawScreenGrid();
    this->drawTransformers();
    this->drawPlatform();
    this->drawBalls();
    SDL_RenderPresent(this->renderer.get());
}

void GameScreen::drawPlatform()
{
    auto [plat_x, plat_y] = this->game->get_platform().get_position();
    // cast float to int
    SDL_Rect rect = {static_cast<int>(plat_x), static_cast<int>(plat_y), static_cast<int>(this->game->get_platform().get_width()), static_cast<int>(this->game->get_platform().get_height())};
    SDL_SetRenderDrawColor(this->renderer.get(), 255, 255, 0, 255);
    SDL_RenderFillRect(this->renderer.get(), &rect);
}

void GameScreen::drawBalls()
{
    // use iterator to draw all balls
    for (auto it = this->game->get_balls().begin(); it != this->game->get_balls().end(); ++it)
    {
        SDL_SetRenderDrawColor(this->renderer.get(), 255, 0, 0, 255);
        auto [x, y] = (*it)->get_position();
        drawBall(this->renderer, x, y, (int)((*it)->get_radius()));
    }
}

void GameScreen::drawScreenGrid()
{
    drawGrid(this->renderer, WINDOW_WIDTH, WINDOW_HEIGHT / 4, this->game->get_grid());
}

void GameScreen::drawWalls()
{
    for (auto it = this->game->get_walls().begin(); it != this->game->get_walls().end(); ++it)
    {
        drawWall(this->renderer, **it);
    }
}

void GameScreen::drawTransformers()
{
    std::cout << "Drawing transformers" << std::endl;
    std::cout << "Number of transformers: " << &this->game->get_grid() << std::endl;
    for (auto &trans : this->game->get_grid().get_transformers())
    // for(auto it = this->game->get_grid().get_transformers().begin(); it != this->game->get_grid().get_transformers().end(); ++it)
    {
        if (trans != nullptr)
        {
            std::cout << "Drawing transformer ouaiiis" << std::endl;
            std::cout << "Position: " << (trans) << std::endl;
            std::cout << "Position: " << &this->renderer << std::endl;
            auto [x, y] = (trans)->get_position();
            std::cout << "Position: " << &x << " " << &y << std::endl;
            drawTransformer(this->renderer, x, y, 10);
        }
    }
}

void GameScreen::update()
{
    if (!this->game->is_end())
    {
        this->game->update();
    }
    else
    {
        std::cout << "Game Over!" << std::endl;
        if (this->game->balls_are_out())
        {
            std::cout << "You lost!" << std::endl;
        }
        else
        {
            std::cout << "You won!" << std::endl;
        }
    }
}