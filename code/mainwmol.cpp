#include <GLFW/glfw3.h>
#include <iostream>
using namespace std;
int main(){
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
            cout<<"Hello World!\n";
            cout<<"\033[2J\033[1;1H";
        }
        if (glfwGetKey(window, GLFW_KEY_2) == GLFW_PRESS) {
            cout<<"Hello!";
            cout<<"\033[2J\033[1;1H";
        }
        if (glfwGetKey(window, GLFW_KEY_3) == GLFW_PRESS) {
            printf("Hi!");
            cout<<"\033[2J\033[1;1H";
        }
        if (glfwGetKey(window, GLFW_KEY_4) == GLFW_PRESS) {
            cout<<"Made By User123573";
            cout<<"\033[2J\033[1;1H";
        }
        if (glfwGetKey(window, GLFW_KEY_5) == GLFW_PRESS) {
            cout<<"Explosion!";
            cout<<"\033[2J\033[1;1H";
        }
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
