// A debug engine for wiiu-libgui
#include <DrawWrapper.hpp>
#include <iostream>

namespace GUI
{
    const bool isRelative = true;
    void draw_line(GUI::DrawPoint start, GUI::DrawPoint end)
    {
        std::wcout << "Draw line: "
                   << "(" << start.point.x << ", " << start.point.y << ")"
                   << "[" << start.color.r << ", " << start.color.b << ", " << start.color.g << ", " << start.color.a << "] "
                   << "to"
                   << "(" << end.point.x << ", " << end.point.y << ")"
                   << "[" << end.color.r << ", " << end.color.b << ", " << end.color.g << ", " << end.color.a << "] "
                   << std::endl;
    }

    void draw_rect(GUI::DrawPoint start, GUI::DrawPoint end)
    {
        std::wcout << "Draw rect: "
                   << "(" << start.point.x << ", " << start.point.y << ")"
                   << "[" << start.color.r << ", " << start.color.b << ", " << start.color.g << ", " << start.color.a << "] "
                   << "to"
                   << "(" << end.point.x << ", " << end.point.y << ")"
                   << "[" << end.color.r << ", " << end.color.b << ", " << end.color.g << ", " << end.color.a << "] "
                   << std::endl;
    }

    void draw_text(int row, int column, char *text, Color color)
    {
        std::wcout << "Draw text: "
                   << row << "," << column << " "
                   << "[" << text << "] "
                   << "[" << color.r << ", " << color.b << ", " << color.g << ", " << color.a << "] "
                   << std::endl;
    }
    void draw_translate(int x, int y)
    {
        std::wcout << "Draw tran: "
                   << x << ", " << y
                   << std::endl;
    }
    void draw_triangle(GUI::DrawPoint A, GUI::DrawPoint B, GUI::DrawPoint C)
    {
        std::wcout << "Draw tria: "
                   << "(" << A.point.x << ", " << A.point.y << ")"
                   << "[" << A.color.r << ", " << A.color.b << ", " << A.color.g << ", " << A.color.a << "] "
                   << ", "
                   << "(" << B.point.x << ", " << B.point.y << ")"
                   << "[" << B.color.r << ", " << B.color.b << ", " << B.color.g << ", " << B.color.a << "] "
                   << ", "
                   << "(" << C.point.x << ", " << C.point.y << ")"
                   << "[" << C.color.r << ", " << C.color.b << ", " << C.color.g << ", " << C.color.a << "] "
                   << ", "
                   << std::endl;
    }
}