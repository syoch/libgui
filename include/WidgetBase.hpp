#pragma once
#ifndef LIBGUI_DISPLAYABLE_WIDGET
#define LIBGUI_DISPLAYABLE_WIDGET

#include <vector>
#include "Base.hpp"

namespace GUI
{
    class ContainerBase;

    class WidgetBase : public Base
    {
    public:
        void draw_line(DrawPoint start, DrawPoint end);
        void draw_rect(DrawPoint start, DrawPoint end);
        void draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C);
        void draw_text(int row, int column, char *text, Color color);
        void draw_translate(int x, int y);

    public:
        using Base::Base;
        ContainerBase &super;

        WidgetBase(ContainerBase &super, int x, int y, int w, int h);
    };
}

#endif