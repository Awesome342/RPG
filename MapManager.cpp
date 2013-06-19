#include "MapManager.h"

MapManager::MapManager()
{
    Map1.init("data/bg.png");
}

void MapManager::draw( SDL_Surface *Screen )
{
    Map1.draw( Screen );
}

void MapManager::checkColl( SDL_Rect Pos )
{
    if ( Map1.IsVisible == true )
    {
        SDL_Rect POS;
        POS.x = 32;
        POS.y = 32;
        POS.w = 32;
        POS.h = 32;
        if ( Pos.x < POS.x + POS.w &&
             Pos.x + Pos.w > POS.x &&
             Pos.y < POS.y + POS.h &&
             Pos.y + Pos.y > POS.y )
        {
            Map1.IsVisible = false;
        }
    }
}
