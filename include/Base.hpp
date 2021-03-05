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
        virtual void draw_line(DrawPoint start, DrawPoint end);
        virtual void draw_rect(DrawPoint start, DrawPoint end);
        virtual void draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C);
        virtual void draw_text(int row, int column, char *, Color color);
        virtual void draw_translate(int x, int y);

    public:
        Base(int x, int y, int w, int h);

        virtual void _draw();
        virtual void onTouch(int x, int y);
        virtual void onButton(uint32_t key);

        void hide();
        void show();

        Point pos;
        Size size;

    private:
        bool isHided;
    };
}

#endif