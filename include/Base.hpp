#pragma once
#ifndef LIBGUI_WIDGET_BASE
#define LIBGUI_WIDGET_BASE

#include <inttypes.h>

#include "Types.hpp"

namespace GUI
{
    class ContainerBase;

    class Base
    {
    protected:
        virtual void draw();

    public:
        void draw_line(Point start, Point end);
        void draw_rect(Point start, Point end);
        void draw_triangle(Point A, Point B, Point C);
        void draw_text(int row, int column, char *);
        void draw_translate(int x, int y);

    public:
        Base(int x, int y, int w, int h);

        virtual void _draw();
        virtual void onTouch(int x, int y);
        virtual void onButton(uint32_t key);

        Point pos;
        Size size;
    };
}

#endif