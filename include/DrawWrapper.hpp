#pragma once
#ifndef LIBGUI_DRAW_WRAPPER
#define LIBGUI_DRAW_WRAPPER

#include <vector>
#include "Widget.hpp"

namespace gui
{
    const bool isRelative;
    void draw_line(Point start, Point end);
    void draw_rect(Point start, Point end);
    void draw_triangle(Point A, Point B, Point C);
    void draw_text(int row, int column, char *);
    void draw_translate(int x, int y);
}

#endif