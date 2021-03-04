#include <Scroll.hpp>
#include <WidgetBase.hpp>
#include <DrawWrapper.hpp>

GUI::Point GUI::Scroll::convert(GUI::Point src)
{
    if (!GUI::isRelative)
        src.y += yOffset;
    if (!GUI::isRelative)
        src.x += xOffset;
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
    super.draw_line(convert(start), convert(end));
}
void GUI::Scroll::draw_rect(Point start, Point end)
{
    super.draw_rect(convert(start), convert(end));
}
void GUI::Scroll::draw_triangle(Point A, Point B, Point C)
{
    super.draw_triangle(convert(A), convert(B), convert(C));
}
void GUI::Scroll::draw_text(int row, int column, char *text)
{
    super.draw_text(row, column, text);
}
void GUI::Scroll::draw_translate(int x, int y)
{
    super.draw_translate(x, y);
}
void GUI::Scroll::_draw()
{
    if (GUI::isRelative)
        draw_translate(0, yOffset);
    Container::_draw();
    if (GUI::isRelative)
        draw_translate(0, -yOffset);
}