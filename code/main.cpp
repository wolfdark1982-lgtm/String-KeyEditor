#include <GLFW/glfw3.h>
#include <String-KeyEditor.h>
int main(){
    if (!glfwInit()) {
        return -1;
    }
    GLFWwindow* window = glfwCreateWindow(190, 190, "StringKeyEditor", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    while (!glfwWindowShouldClose(window)) {
        if (glfwGetKey(window, GLFW_KEY_1) == GLFW_PRESS) {
            printf("Hello World!\n");
            printf("\033[2J\033[1;1H");
        }
        if (glfwGetKey(window, GLFW_KEY_2) == GLFW_PRESS) {
            printf("Hello!");
            printf("\033[2J\033[1;1H");
        }
        if (glfwGetKey(window, GLFW_KEY_3) == GLFW_PRESS) {
            printf("Hi!");
            printf("\033[2J\033[1;1H");
        }
        if (glfwGetKey(window, GLFW_KEY_4) == GLFW_PRESS) {
            printf("Made By User123573");
            printf("\033[2J\033[1;1H");
        }
        if (glfwGetKey(window, GLFW_KEY_5) == GLFW_PRESS) {
            printf("Explosion!");
            printf("\033[2J\033[1;1H");
        }
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
