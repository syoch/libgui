#pragma once
#ifndef LIBGUI_DRAW_WRAPPER
#define LIBGUI_DRAW_WRAPPER

#include <vector>
#include "Widget.hpp"

namespace GUI
{
    extern const bool isRelative;
    void draw_begin();
    void draw_end();
    void draw_line(DrawPoint start, DrawPoint end);
    void draw_rect(DrawPoint start, DrawPoint end);
    void draw_rect(DrawPoint A, DrawPoint B, DrawPoint C, DrawPoint D);
    void draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C);
    void draw_text(int row, int column, char *, Color color);
    void draw_textShadow(int row, int column, char *, Color color);
    void draw_translate(float x, float y);
    void _draw_translate(float x, float y);
}

#endif