#include <GUI/Scroll.hpp>
#include <GUI/DrawWrapper.hpp>
#include <iostream>
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