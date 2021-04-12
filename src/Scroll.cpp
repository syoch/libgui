#include <GUI/Scroll.hpp>
#include <GUI/DrawWrapper.hpp>
#include <iostream>
GUI::Scroll::Scroll(int x, int y, int w, int h, bool isHidden)
    : Container(x, y, w, h, isHidden), xOffset(0), yOffset(0)
{
}
void GUI::Scroll::up(int dy)
{
    pos.y -= dy;
}
void GUI::Scroll::down(int dy)
{
    pos.y += dy;
}
void GUI::Scroll::right(int dy)
{
    pos.x += dy;
}
void GUI::Scroll::left(int dy)
{
    pos.y -= dy;
}
void GUI::Scroll::horizontal(int dx)
{
    pos.x += dx;
}
void GUI::Scroll::vertical(int dy)
{
    pos.y += dy;
}