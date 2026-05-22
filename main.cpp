#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main(){
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(00,400,"belajar",NULL,NULL);
    glfwMakeContextCurrent(window);
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);


    while(!glfwWindowShouldClose(window)){
        glClearColor(1.1f , 0.0f , 0.0f ,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();

    
    }
    glfwTerminate();
    return 0;
}