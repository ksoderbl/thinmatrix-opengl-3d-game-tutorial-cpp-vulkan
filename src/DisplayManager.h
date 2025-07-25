#ifndef DISPLAYMANAGER_H
#define DISPLAYMANAGER_H

// #include "Headers.h"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
// #include <vulkan/vulkan.h>

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
    // long getCurrentTime();
    // GLfloat getFrameTimeSeconds();
    // GLsizei getWidth() { return width; }
    // GLsizei getHeight() { return height; }
    // void setSize(GLsizei width, GLsizei height);
    // GLfloat getAspectRatio() { return ((GLfloat) width) / height; }

private:
    GLFWwindow* window;
    // SDL_Window *window;
    // SDL_GLContext glContext;

    // int FPS_CAP = 120;
    int width = 1280;
    int height = 720;

    // // e.g. SDL_WINDOWPOS_CENTERED, or SDL_WINDOWPOS_UNDEFINED
    // int S_XPOS = SDL_WINDOWPOS_UNDEFINED;
    // int S_YPOS = SDL_WINDOWPOS_UNDEFINED;

    // long lastFrameTime;
    // render time of previous frame
    // GLfloat delta;
    // time_t oldt = 0;
    // int fps = 0;
};

extern DisplayManager display;

#endif
