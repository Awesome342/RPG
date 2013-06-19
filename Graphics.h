#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "MapManager.h"
#include "Player.h"

class Graphics
{
    public:
        Graphics();
        ~Graphics();
        void draw();

    private:
        SDL_Surface *Screen;
        MapManager Map;
        Player Knight;
};

#endif
