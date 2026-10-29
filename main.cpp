#include <GLFW/glfw3.h>
#include <String-KeyEditor.h>
int main(){
    while (true){
        print("\033[2J\033[1;1H");
    }
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
        if (glfwGetKey(window, GLFW_KEY_2) == GLFW_PRESS) {
            printf("Hello!");
        }
        if (glfwGetKey(window, GLFW_KEY_3) == GLFW_PRESS) {
            printf("Hi!");
        }
        if (glfwGetKey(window, GLFW_KEY_4) == GLFW_PRESS) {
            printf("Made By User123573");
        }
        if (glfwGetKey(window, GLFW_KEY_5) == GLFW_PRESS) {
            printf("Explosion!");
        }
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
