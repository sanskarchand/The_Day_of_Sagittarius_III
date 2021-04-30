#ifndef GAME_H
#define GAME_H

#include "config.h"
#include <SDL2/SDL.h>

#include <stdio.h>

class Game
{
public:
    Game();
    ~Game();

    void init();
    void start();
private:
    SDL_Window *gWindow = nullptr;
    SDL_Surface *gScreenSurface = nullptr;

};

#endif

