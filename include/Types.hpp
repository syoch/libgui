#pragma once
#ifndef LIBGUI_SIZE
#define LIBGUI_SIZE

namespace GUI
{
    struct Point
    {
        int x;
        int y;
    };
    struct Size
    {
        int width;
        int height;
    };
    struct Color
    {
        int r, g, b;
        int a;
    };
    struct DrawPoint
    {
        Point point;
        Color color;
    };
}

#endif