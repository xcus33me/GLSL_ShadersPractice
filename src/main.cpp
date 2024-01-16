#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

// std

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class  {
public:
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }

private:
    void initWindow() {
        // GLFW INITIALIZE
        glfwInit();

        // We need to tell it to not create an OpenGL context with a subsequent call:
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); // Temporarily

    }

    void initVulkan() {

    }

    void mainLoop() {

    }

    void cleanup() {

    }

};

int main() {
    HelloTriangleApplication app;

    try {
        app.run();
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}