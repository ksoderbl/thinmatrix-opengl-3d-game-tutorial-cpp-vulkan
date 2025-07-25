#include "DisplayManager.h"

#include <iostream>
#include <stdexcept>
#include <cstdlib>

// static bool pausing = false;
// static bool isCloseRequested = false;

/* ---------------------------------------------------------------------- */

// static void handle_keydown(SDL_KeyboardEvent key)
// {
//     switch (key.keysym.sym) {
//     case SDLK_ESCAPE:
//         isCloseRequested = true;
//         break;
//     case SDLK_m:
//         //messages_toggle();
//         break;

//     case SDLK_PAUSE:
//         pausing = !pausing;
//         break;
//     case SDLK_r:
//         //reset
//         break;

//     default:
//         ;
//     }
// }

// static void handle_keyup(SDL_KeyboardEvent key)
// {
//     switch (key.keysym.sym) {
//     case SDLK_ESCAPE:
//         isCloseRequested = true;
//         break;
//     case SDLK_m:
//         //messages_toggle();
//         break;

//     case SDLK_PAUSE:
//         break;
//     case SDLK_r:
//         //reset
//         break;

//     default:
//         ;
//     }
// }

void checkEvents()
{
    display.pollEvents();
    // SDL_Event event;

    // while (SDL_PollEvent(&event))
    // {
    //     if (event.type == SDL_QUIT)
    //         isCloseRequested = true;

    //     else if (event.type == SDL_KEYDOWN)
    //     {
    //         handle_keydown(event.key);
    //     }

    //     else if (event.type == SDL_KEYUP)
    //     {
    //         handle_keyup(event.key);
    //     }

    //     else if (event.type == SDL_WINDOWEVENT)
    //     {
    //         int w, h;
    //         switch (event.window.event) {
    //         case SDL_WINDOWEVENT_SIZE_CHANGED:
    //         case SDL_WINDOWEVENT_RESIZED:
    //             w = event.window.data1;
    //             h = event.window.data2;
    //             display.setSize(w, h);
    //             break;
    //         default:
    //             break;
    //         }
    //     }
    // }
}

int main(int argc, char *argv[])
{
    try {
        display.createDisplay();

        while (!display.isCloseRequested()) {
            checkEvents();

            display.updateDisplay();
        }

        display.closeDisplay();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;    
}
