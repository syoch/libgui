#include <Scroll.hpp>
#include <WidgetBase.hpp>

GUI::Point convert(GUI::Point src)
{
}

GUI::Scroll::Scroll(GUI::ContainerBase &super, int x, int y, int w, int h)
    : GUI::Container(super, x, y, w, h), yOffset(0), WidgetBase(super, x, y, w, h), ContainerBase(x, y, w, h)
{
}
void GUI::Scroll::up(int dy)
{
    yOffset -= dy;
}
void GUI::Scroll::down(int dy)
{
    yOffset += dy;
}
void GUI::Scroll::draw_line(Point start, Point end)
{
    super.draw_line(start, end);
}
void GUI::Scroll::draw_rect(Point start, Point end)
{
    super.draw_rect(start, end);
}
void GUI::Scroll::draw_triangle(Point A, Point B, Point C)
{
    super.draw_triangle(A, B, C);
}
void GUI::Scroll::draw_text(int row, int column, char *text)
{
    super.draw_text(row, column, text);
}
void GUI::Scroll::draw_translate(int x, int y)
{
    super.draw_translate(x, y);
}