#include <glfwlib.h>
#include <String-KeyEditor.h>
int main() {
    if (!glfwInit()) {
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(640, 480, "StringKeyEditor", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        if (glfwGetKey(window, GLFW_KEY_1) == GLFW_PRESS) {
            printf("Hello World!\n");
        }
        
        if (glfwGetKey(window, GLFW_KEY_C) == GLFW_PRESS) {
            printf("\033[2J\033[1;1H");
        }

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
