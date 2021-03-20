#include <Scroll.hpp>
#include <DrawWrapper.hpp>

GUI::Pos GUI::Scroll::convert(GUI::Pos src)
{
    src.y += yOffset;
    src.x += xOffset;

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