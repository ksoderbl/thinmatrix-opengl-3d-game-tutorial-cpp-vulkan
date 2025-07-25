#ifndef DISPLAYMANAGER_H
#define DISPLAYMANAGER_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class DisplayManager {
public:
    void createDisplay();
    void pollEvents();
    void updateDisplay();
    void closeDisplay();
    bool isCloseRequested();

private:
    GLFWwindow* window;
    int width = 1280;
    int height = 720;
};

extern DisplayManager display;

#endif
