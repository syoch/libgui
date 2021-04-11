#include <GUI/Scroll.hpp>
#include <GUI/DrawWrapper.hpp>

GUI::Pos GUI::Scroll::conv(GUI::Pos src)
{
    src.y += yOffset + pos.y;
    src.x += xOffset + pos.x;

    if (src.x > size.w)
    {
        src.x = size.w;
    }
    if (src.y > size.h)
    {
        src.y = size.h;
    }

    return src;
}
void GUI::Scroll::up(int dy)
{
    yOffset -= dy;
}
void GUI::Scroll::down(int dy)
{
    yOffset += dy;
}
void GUI::Scroll::right(int dy)
{
    xOffset += dy;
}
void GUI::Scroll::left(int dy)
{
    yOffset -= dy;
}
void GUI::Scroll::horizontal(int dx)
{
    xOffset += dx;
}
void GUI::Scroll::vertical(int dy)
{
    yOffset += dy;
}