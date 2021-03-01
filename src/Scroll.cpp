#include <Scroll.hpp>
#include <WidgetBase.hpp>
#include <DrawWrapper.hpp>

GUI::Point convert(GUI::Point src, int offset)
{
    if (!GUI::isRelative)
        src.y += offset;
    return src;
}

GUI::Scroll::Scroll(GUI::ContainerBase &super, int x, int y, int w, int h)
    : GUI::Container(super, x, y, w, h), yOffset(0), WidgetBase(super, x, y, w, h), ContainerBase(x, y, w, h)
{
}
void GUI::Scroll::up(int dy)
{
    yOffset -= dy;
    _draw();
}
void GUI::Scroll::down(int dy)
{
    yOffset += dy;
    _draw();
}
void GUI::Scroll::draw_line(Point start, Point end)
{
    super.draw_line(convert(start, yOffset), convert(end, yOffset));
}
void GUI::Scroll::draw_rect(Point start, Point end)
{
    super.draw_rect(convert(start, yOffset), convert(end, yOffset));
}
void GUI::Scroll::draw_triangle(Point A, Point B, Point C)
{
    super.draw_triangle(convert(A, yOffset), convert(B, yOffset), convert(C, yOffset));
}
void GUI::Scroll::draw_text(int row, int column, char *text)
{
    super.draw_text(row, column, text);
}
void GUI::Scroll::draw_translate(int x, int y)
{
    super.draw_translate(x, y + yOffset);
}