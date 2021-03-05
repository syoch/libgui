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
        void draw_line(DrawPoint start, DrawPoint end) override;
        void draw_rect(DrawPoint start, DrawPoint end) override;
        void draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C) override;
        void draw_text(int row, int column, char *, Color color) override;
        void draw_translate(int x, int y) override;
        void _draw() override;

        using Container::Container;
        Scroll(ContainerBase &super, int x, int y, int w, int h);
        void down(int dy);
        void up(int dy);
        void right(int dy);
        void left(int dy);

    private:
        DrawPoint convert(DrawPoint src);
        int yOffset;
        int xOffset;
    };
}

#endif