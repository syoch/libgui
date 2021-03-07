#include <Scroll.hpp>
#include <WidgetBase.hpp>
#include <DrawWrapper.hpp>

GUI::DrawPoint GUI::Scroll::convert(GUI::DrawPoint src)
{
    if (!GUI::isRelative)
        src.point.y += yOffset;
    if (!GUI::isRelative)
        src.point.x += xOffset;

    if (src.point.x > WidgetBase::size.width)
    {
        src.point.x = WidgetBase::size.width;
    }
    if (src.point.y > WidgetBase::size.height)
    {
        src.point.y = WidgetBase::size.height;
    }

    return src;
}

GUI::Scroll::Scroll(GUI::ContainerBase &super, int x, int y, int w, int h)
    : ContainerBase(x, y, w, h), WidgetBase(super, x, y, w, h), GUI::Container(super, x, y, w, h), yOffset(0), xOffset(0)
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
void GUI::Scroll::right(int dy)
{
    xOffset += dy;
    _draw();
}
void GUI::Scroll::left(int dy)
{
    yOffset -= dy;
    _draw();
}
void GUI::Scroll::draw_line(DrawPoint start, DrawPoint end)
{
    super.draw_line(convert(start), convert(end));
}
void GUI::Scroll::draw_rect(DrawPoint start, DrawPoint end)
{
    super.draw_rect(convert(start), convert(end));
}
void GUI::Scroll::draw_rect(DrawPoint A, DrawPoint B, DrawPoint C, DrawPoint D)
{
    super.draw_rect(convert(A), convert(B), convert(C), convert(D));
}
void GUI::Scroll::draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C)
{
    super.draw_triangle(convert(A), convert(B), convert(C));
}
void GUI::Scroll::draw_text(int row, int column, char *text, Color color)
{
    super.draw_text(row, column, text, color);
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