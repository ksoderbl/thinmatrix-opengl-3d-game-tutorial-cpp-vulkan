#include "DisplayManager.h"

#include <iostream>
#include <stdexcept>
#include <cstdlib>

void checkEvents()
{
    display.pollEvents();
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
