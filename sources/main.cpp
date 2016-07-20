
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#pragma comment (lib, "opengl32")
#if _DEBUG
#pragma comment (lib, "glfw3d")
#else
#pragma comment (lib, "glfw3")
#endif

int main()
{
  if (!glfwInit()) { return 0; }

  auto window = glfwCreateWindow(800, 600, "game framework", nullptr, nullptr);
  if (!window) { glfwTerminate(); return 0; }

  glfwMakeContextCurrent(window);
  glfwSwapInterval(1);

  while (!glfwWindowShouldClose(window))
  {
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwTerminate();
}
