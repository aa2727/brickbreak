#include "view/Window.h"

Window::Window() : window(nullptr, SDL_DestroyWindow)
{
    // nothing to do
}

Window::~Window()
{
    // nothing to do
}

void Window::changeTo(std::unique_ptr<Window> window)
{
    // nothing to do
}


