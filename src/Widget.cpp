#include <Widget.hpp>

gui::Widget::Widget()
    : pos((Point){0, 0}), size((Size){0, 0})
{
}
gui::Widget::Widget(int x, int y, int w, int h)
    : pos((Point){x, y}), size((Size){w, h})
{
}
gui::Widget::~Widget() {}
void gui::Widget::draw_line(Point start, Point end)
{
}
void gui::Widget::draw_rect(Point start, Point end)
{
}
void gui::Widget::draw_triangle(Point A, Point B, Point C)
{
}
void gui::Widget::draw_text(int row, int column, char *)
{
}
void gui::Widget::onTouch(int x, int y)
{
}
void gui::Widget::onButton(uint32_t key)
{
}
void gui::Widget::draw()
{
}