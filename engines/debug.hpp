// A debug engine for wiiu-libgui
#include <DrawWrapper.hpp>
#include <iostream>

void gui::draw_line(gui::Point start, gui::Point end)
{
    std::wcout << "Draw line:"
               << "(" << start.x << ", " << start.y << ")"
               << "to"
               << "(" << end.x << ", " << end.y << ")"
               << std::endl;
}

void gui::draw_rect(gui::Point start, gui::Point end)
{
    std::wcout << "Draw rect:"
               << "(" << start.x << ", " << start.y << ")"
               << "to"
               << "(" << end.x << ", " << end.y << ")"
               << std::endl;
}

void gui::draw_text(int row, int column, char *text)
{
    std::wcout << "Draw text:"
               << row << "," << column
               << " [" << text << "]"
               << std::endl;
}
void gui::draw_translate(int x, int y)
{
    std::wcout << "Draw tran:"
               << x << ", " << y
               << std::endl;
}
void gui::draw_triangle(gui::Point A, gui::Point B, gui::Point C)
{
    std::wcout << "Draw tria:"
               << "(" << A.x << ", " << A.y << ")"
               << ", "
               << "(" << B.x << ", " << B.y << ")"
               << ", "
               << "(" << C.x << ", " << C.y << ")"
               << ", "
               << std::endl;
}
