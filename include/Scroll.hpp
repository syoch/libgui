#pragma once
#ifndef LIBGUI_SCROLL
#define LIBGUI_SCROLL

#include <vector>
#include "Container.hpp"

namespace GUI
{
    class Scroll : public Container
    {
        using Container::Container;
        Scroll(int x, int y, int w, int h);
        void down(int dy);
        void up(int dy);
        void right(int dy);
        void left(int dy);

    private:
        Pos convert(Pos src);
        int yOffset;
        int xOffset;
    };
}

#endif