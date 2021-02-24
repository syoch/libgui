#pragma once
#ifndef LIBGUI_WIDGET
#define LIBGUI_WIDGET
#include "Point.hpp"
#include "Size.hpp"
#include <inttypes.h>

namespace gui
{
    class Widget
    {
    private:
        Point pos;
        Size size;

    public:
        Widget(int x, int y, int w, int h);

        virtual void onTouch(int x, int y);
        virtual void onButton(uint32_t key);

        void draw_line(Point start, Point end);
        void draw_rect(Point start, Point end);
        void draw_triangle(Point A, Point B, Point C);
        void draw_text(int row, int column, char *);
    };
}

#endif