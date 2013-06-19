#ifndef PLAYER_H
#define PLAYER_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

class Player
{
    public:
        Player();
        ~Player();
        void draw( SDL_Surface *Screen );
        void getInput();
        SDL_Rect returnPos();

    private:
        SDL_Surface *Img;
        SDL_Rect Pos;
        Uint8 *key;
};

#endif
