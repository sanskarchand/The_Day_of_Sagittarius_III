#include "game.h"

Game::Game()
{
    init();
}

Game::~Game()
{
    SDL_DestroyWindow(gWindow);
    SDL_Quit();
}

void Game::init()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "FAIL_001__failure_video_init");
        return;
    }

    if (!SDL_CreateWindow("The Day of Sagittarius III", SDL_WINDOWPOS_UNDEFINED, 
                SDL_WINDOWPOS_UNDEFINED, Constants::SCREEN_WIDTH, Constants::SCREEN_HEIGHT,
                SDL_WINDOW_SHOWN)) {

        fprintf(stderr, "FAIL_002__failure_window_creation"); 
        return;
    }

}



void Game::start()
{
    SDL_UpdateWindowSurface(gWindow);
    SDL_Delay(2000);

}

