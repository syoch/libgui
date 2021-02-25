#pragma once
#ifndef LIBGUI_WIDGET_BASE
#define LIBGUI_WIDGET_BASE

#include <inttypes.h>

#include "Point.hpp"
#include "Size.hpp"

namespace gui
{
    class WidgetBase
    {
    private:
        void draw_line(Point start, Point end);
        void draw_rect(Point start, Point end);
        void draw_triangle(Point A, Point B, Point C);
        void draw_text(int row, int column, char *);
        void draw_translate(int x, int y);
        void draw();

    public:
        virtual void _draw();
        virtual void onTouch(int x, int y);
        virtual void onButton(uint32_t key);

        Point pos;
        Size size;
    };
}

#endif