#include "../lib/include/lsearch.h"
#include <GLFW/glfw3.h>
#include <iostream>

int main() {
    
    int arr[4] = {1, 2, 3, 4};
    int target = 3; 
    int result = akvachan::lsearch(target, arr, 4);
    
    GLFWwindow* window;
    int width, height;

    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        //// draw gears 
        //draw();
        //// update animation
        //animate();

        // swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();
    std::cout << result << std::endl; 

    return 0;

}
