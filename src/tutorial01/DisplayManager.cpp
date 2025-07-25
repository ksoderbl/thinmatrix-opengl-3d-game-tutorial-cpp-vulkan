#include "DisplayManager.h"

const char *title = "OpenGL 3D Game Tutorial 1: The Display";

DisplayManager display;

void DisplayManager::createDisplay()
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    window = glfwCreateWindow(width, height, title, nullptr, nullptr);
}

void DisplayManager::pollEvents()
{
    glfwPollEvents();
}

void DisplayManager::updateDisplay()
{
}

void DisplayManager::closeDisplay()
{
    glfwDestroyWindow(window);
    glfwTerminate(); 
}

bool DisplayManager::isCloseRequested()
{
    if (glfwWindowShouldClose(window)) {
        return true;
    }
    return false;
}
