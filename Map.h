#ifndef MAP_H
#define MAP_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

class Map
{
    public:
        void init( const char* filename );
        ~Map();
        void draw( SDL_Surface *Screen );

        SDL_Surface *Img;
        bool IsVisible;
};

#endif
