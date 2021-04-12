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
        Scroll(int x = 0, int y = 0, int w = 0, int h = 0, bool isHidden = false);
        void down(int dy);
        void up(int dy);
        void right(int dy);
        void left(int dy);
        void horizontal(int dx);
        void vertical(int dy);

        Pos &conv(Pos &src);

    private:
        int yOffset;
        int xOffset;
    };
}

#endif