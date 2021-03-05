#pragma once
#ifndef LIBGUI_SIZE
#define LIBGUI_SIZE

namespace GUI
{
    class Point
    {
    public:
        Point(int x = 0, int y = 0);

        int x;
        int y;
    };
    class Size
    {
    public:
        Size(int width = 0, int height = 0);

        int width;
        int height;
    };
    class Color
    {
    public:
        Color(int r = 0, int g = 0, int b = 0, int a = 0);
        int r, g, b;
        int a;
    };
    class DrawPoint
    {
    public:
        DrawPoint(Point point = (Point){}, Color color = (Color){});
        Point point;
        Color color;
    };
}

#endif