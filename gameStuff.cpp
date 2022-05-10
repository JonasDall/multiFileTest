#include <iostream>
#include "gameStuff.hpp"

namespace gs
{
    Object::Object(int newIndex)
    {
        Object::index = newIndex;
        std::cout << Object::index << "!\n";
    }

    void Object::setIndex(int newIndex)
    {
        Object::index = newIndex;
    }

    int Object::getIndex()
    {
        return Object::index;
    }
}