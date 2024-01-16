#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

// std

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class MyApplication{
public:
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }

private:
    const uint32_t WIDTH = 800;
    const uint32_t HEIGHT = 600;
    GLFWwindow* window;


    void initWindow() {
        glfwInit();

        // We need to tell it to not create an OpenGL context with a subsequent call:
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); // Temporarily

        window = glfwCreateWindow(WIDTH, HEIGHT, "ShaderPractice", nullptr, nullptr);
    }

    void initVulkan() {

    }

    void mainLoop() {
        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }
    }

    void cleanup() {
        glfwDestroyWindow(window);

        glfwTerminate();
    }
};

int main() {
    MyApplication app;

    try {
        app.run();
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}