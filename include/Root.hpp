#pragma once
#ifndef LIBGUI_ROOT
#define LIBGUI_ROOT

#include <vector>
#include "ContainerBase.hpp"

namespace GUI
{
    class Root : public ContainerBase
    {
        void draw_line(DrawPoint start, DrawPoint end) override;
        void draw_rect(DrawPoint start, DrawPoint end) override;
        void draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C) override;
        void draw_text(int row, int column, char *, Color color) override;
        void draw_translate(int x, int y) override;

    public:
        Root();
    };
}

#endif