#ifndef GAMESTUFF_H
#define GAMESTUFF_H

namespace gs
{
    struct int2D
    {
        int x;
        int y;
    };

    class Object
    {
    private:
        int index;

    public:
        Object(int newIndex);

        void setIndex(int newIndex);
        int getIndex();
    };
}

#endif