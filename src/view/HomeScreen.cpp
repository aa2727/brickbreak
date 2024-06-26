#include "view/HomeScreen.h"
#include "view/GameScreen.h"

HomeScreen::HomeScreen() : title(nullptr, SDL_DestroyTexture),
                           playButton(nullptr, SDL_DestroyTexture),
                           quitButton(nullptr, SDL_DestroyTexture)
{
    // nothing to do
}

HomeScreen::~HomeScreen()
{
    // nothing to do
}

void HomeScreen::init()
{
    this->titleRectSrc = {0, 0, 0, 0};
    this->titleRectDest = {0, 0, 0, 0};
    this->playButtonRectSrc = {0, 0, 0, 0};
    this->playButtonRectDest = {0, 0, 0, 0};
    this->quitButtonRectDest = {0, 0, 0, 0};
    this->quitButtonRectSrc = {0, 0, 0, 0};
    this->renderer = std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)>(SDL_CreateRenderer(this->window.get(), -1, 0), SDL_DestroyRenderer);
    SDL_SetRenderDrawColor(this->renderer.get(), 150, 150, 150, 255);
    // Load title
    std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> surface(IMG_Load("../res/title.png"), SDL_FreeSurface);
    this->title = std::unique_ptr<SDL_Texture, decltype(&SDL_DestroyTexture)>(SDL_CreateTextureFromSurface(this->renderer.get(), surface.get()), SDL_DestroyTexture);

    // Load play button
    std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> surfacePlay(IMG_Load("../res/play.png"), SDL_FreeSurface);
    this->playButton = std::unique_ptr<SDL_Texture, decltype(&SDL_DestroyTexture)>(SDL_CreateTextureFromSurface(this->renderer.get(), surfacePlay.get()), SDL_DestroyTexture);
    // Load quit button
    std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> surfaceQuit(IMG_Load("../res/quit.png"), SDL_FreeSurface);
    this->quitButton = std::unique_ptr<SDL_Texture, decltype(&SDL_DestroyTexture)>(SDL_CreateTextureFromSurface(this->renderer.get(), surfaceQuit.get()), SDL_DestroyTexture);
    }

void HomeScreen::handleEvent(const SDL_Event &e)
{
    if (e.type == SDL_MOUSEBUTTONDOWN)
    {
        int x, y;
        SDL_GetMouseState(&x, &y);
        if (x >= 40 && x <= 290 && y >= 550 && y <= 775)
        {
            this->parent->changeTo(nullptr);
        }
        else if (x >= 425 && x <= 675 && y >= 550 && y <= 775)
        {
            this->parent->changeTo(std::make_unique<GameScreen>());
        }
    }
        
}

void HomeScreen::render()
{
    SDL_RenderClear(this->renderer.get());
    SDL_RenderCopy(this->renderer.get(), this->title.get(), NULL, &this->titleRectDest);
    SDL_RenderCopy(this->renderer.get(), this->playButton.get(), NULL, &this->playButtonRectDest);
    SDL_RenderCopy(this->renderer.get(), this->quitButton.get(), NULL, &this->quitButtonRectDest);
    SDL_RenderPresent(this->renderer.get());
}

void HomeScreen::update()
{
    this->titleRectDest.x = 115;
    this->titleRectDest.h = 450;
    this->titleRectDest.w = 500;

    this->quitButtonRectDest.x = 40;
    this->quitButtonRectDest.y = 550;
    this->quitButtonRectDest.h = 225;
    this->quitButtonRectDest.w = 250;

    this->playButtonRectDest.x = 425;
    this->playButtonRectDest.y = 550;
    this->playButtonRectDest.h = 225;
    this->playButtonRectDest.w = 250;
}