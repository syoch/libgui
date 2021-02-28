#pragma once
#ifndef LIBGUI_SCROLL
#define LIBGUI_SCROLL

#include <vector>
#include "Container.hpp"

namespace GUI
{
    class Scroll : public Container
    {
        void draw_line(Point start, Point end);
        void draw_rect(Point start, Point end);
        void draw_triangle(Point A, Point B, Point C);
        void draw_text(int row, int column, char *);
        void draw_translate(int x, int y);

    public:
        using Container::Container;
        Scroll(ContainerBase &super, int x, int y, int w, int h);
        void down(int dy);
        void up(int dy);

    private:
        int yOffset;
    };
}

#endif