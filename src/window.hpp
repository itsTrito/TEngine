#pragma once

#define GLFW_INCLUDE_VULKAN
#include <string>
#include <GLFW/glfw3.h>

namespace te {
    class Window {
    public:
        Window(int w, int j, std::string name);
        ~Window();

        Window(const Window &) = delete;
        Window &operator=(const Window &) = delete;

        bool shouldClose() { return glfwWindowShouldClose(window); }

    private:

        void initWindow();
        const int width;
        const int height;

        std::string windowName;
        GLFWwindow *window;
    };
}