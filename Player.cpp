#include "Player.h"

Player::Player()
{
    Img = IMG_Load("data/player_ship.png");
    Pos.x = 20;
    Pos.y = 200;
    Pos.w = 32;
    Pos.h = 32;
}

void Player::draw( SDL_Surface *Screen )
{
    SDL_BlitSurface( Img, NULL, Screen, &Pos );
}

void Player::getInput()
{
    key = SDL_GetKeyState(NULL);
    if ( key[SDLK_RIGHT] )
    {
        Pos.x += 5;
    }
    if ( key[SDLK_LEFT] )
    {
        Pos.x -= 5;
    }
    if ( key[SDLK_UP] )
    {
        Pos.y -= 5;
    }
    if ( key[SDLK_DOWN] )
    {
        Pos.y += 5;
    }
}

SDL_Rect Player::returnPos()
{
    return Pos;
}

Player::~Player()
{
    SDL_FreeSurface( Img );
}
