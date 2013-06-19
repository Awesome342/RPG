#include "System.h"

System::System()
{
    quit = false;
}

void System::Update()
{
    while ( quit == false )
    {
        //init stuff
        while ( SDL_PollEvent( &event ) )
        {
            if ( event.type == SDL_QUIT )
            {
                quit = true;
            }
        }
        Sprite.draw();
    }
}
