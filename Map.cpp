#include "Map.h"

void Map::init( const char *filename )
{
    Img = IMG_Load(filename);
}

void Map::draw( SDL_Surface *Screen )
{
    if ( IsVisible == true )
    {
        SDL_BlitSurface( Img, NULL, Screen, NULL );
    }
}

Map::~Map()
{
    SDL_FreeSurface( Img );
}
