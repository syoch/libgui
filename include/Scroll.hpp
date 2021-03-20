#pragma once
#ifndef LIBGUI_SCROLL
#define LIBGUI_SCROLL

#include <vector>
#include "Container.hpp"

namespace GUI
{
    class Scroll : public Container
    {
    public:
        using Container::Container;
        void down(int dy);
        void up(int dy);
        void right(int dy);
        void left(int dy);

        Pos conv(Pos src);

    private:
        int yOffset;
        int xOffset;
    };
}

#endif