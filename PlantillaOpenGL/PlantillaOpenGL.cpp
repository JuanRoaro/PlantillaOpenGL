// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

int main()
{
	GLFWwindow * window;
	if (!glfwInit())
		exit(EXIT_FAILURE);
	window = glfwCreateWindow(1024, 768, "glfw", NULL, NULL);

	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
    return 0;
}

