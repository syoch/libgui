#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "Widget.hpp"

namespace gui
{
    void draw_line(Point start, Point end);
    void draw_rect(Point start, Point end);
    void draw_triangle(Point A, Point B, Point C);
    void draw_text(int row, int column, char *);
    void draw_translate(int row, int column, char *);
}

#endif