#ifndef MAPMANAGER_H
#define MAPMANAGER_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "Map.h"

class MapManager
{
    public:
        MapManager();
        void draw( SDL_Surface *Screen );
        void checkColl( SDL_Rect Pos );

    private:
        Map Map1;

};

#endif
