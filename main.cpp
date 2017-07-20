#include <iostream>
#include <SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 640;

int main(int argc, char* argv []) {

    SDL_Window* window = NULL;
    SDL_Surface* surface = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "error " << SDL_GetError();
    } else {
        window = SDL_CreateWindow("Hello",
                                  SDL_WINDOWPOS_UNDEFINED,
                                  SDL_WINDOWPOS_UNDEFINED,
                                  SCREEN_WIDTH,
                                  SCREEN_HEIGHT,
                                  SDL_WINDOW_SHOWN);

        if(window == NULL){
            std::cout << "error " << SDL_GetError();
        } else {
            surface = SDL_GetWindowSurface(window);
            SDL_Surface* helloworld = SDL_LoadBMP( "media\\hello_world.bmp" );
            SDL_BlitSurface( helloworld, NULL, surface, NULL );
            SDL_UpdateWindowSurface( window );
            SDL_Delay(2000);
        }
    }

    SDL_DestroyWindow( window );
    SDL_Quit();

    return 0;
}