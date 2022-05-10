#include <iostream>
#include "gameStuff.hpp"
#include "glfw3.h"

int main(){

gs::Object a(43);

std::cout << a.getIndex() << '\n';

if (!glfwInit())
{
    std::cout << "Not working!\n";
}
else
{
    std::cout << "Working??\n";
}

glfwTerminate();

return 0;
}