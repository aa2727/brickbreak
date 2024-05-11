#include "view/Screen.h"

Screen::Screen(): renderer(nullptr, SDL_DestroyRenderer),
                  background(nullptr, SDL_DestroyTexture)
{
    this->init();
}

Screen::~Screen()
{
   // nothing to do
}

void Screen::init()
{
    std::cout << "Screen init" << std::endl;
}

void Screen::render()
{
    std::cout << "Screen render" << std::endl;
}

void Screen::handleEvent(const SDL_Event &e)
{
    std::cout << "Screen handleEvent" << std::endl;
}

void Screen::update()
{
    std::cout << "Screen update" << std::endl;
}

void Screen::setRenderer(const SDL_Renderer &renderer)
{
    std::cout << "Screen setRenderer" << std::endl;
}

void Screen::destroyRenderer()
{
    SDL_DestroyRenderer(this->renderer.get());
}

void Screen::setWindow(std::shared_ptr<SDL_Window> window)
{
    this->window = window;
}

void Screen::setParent(std::shared_ptr<Window> parent)
{
    this->parent = parent;
}

void Screen::setFont(TTF_Font &font)
{
    std::cout << "Screen setFont" << std::endl;
}
