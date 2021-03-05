#pragma once
#ifndef LIBGUI_SIZE
#define LIBGUI_SIZE

namespace GUI
{
    class Point
    {
    public:
        int x;
        int y;
    };
    class Size
    {
    public:
        int width;
        int height;
    };
    class Color
    {
    public:
        int r, g, b;
        int a;
    };
    class DrawPoint
    {
    public:
        Point point;
        Color color;
    };
}

#endif