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
        void draw_line(Point start, Point end) override;
        void draw_rect(Point start, Point end) override;
        void draw_triangle(Point A, Point B, Point C) override;
        void draw_text(int row, int column, char *) override;
        void draw_translate(int x, int y) override;
        void _draw() override;

        using Container::Container;
        Scroll(ContainerBase &super, int x, int y, int w, int h);
        void down(int dy);
        void up(int dy);
        void right(int dy);
        void left(int dy);

    private:
        Point convert(Point src);
        int yOffset;
        int xOffset;
    };
}

#endif