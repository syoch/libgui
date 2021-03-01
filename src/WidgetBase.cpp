#include <WidgetBase.hpp>
#include <ContainerBase.hpp>

GUI::WidgetBase::WidgetBase(GUI::ContainerBase &_super, int x, int y, int w, int h)
    : Base(x, y, w, h), super(_super)
{
    _super.childrens.emplace_back(*this);
}

void GUI::WidgetBase::draw_line(Point start, Point end)
{
    super.draw_line(start, end);
}
void GUI::WidgetBase::draw_rect(Point start, Point end)
{
    super.draw_rect(start, end);
}
void GUI::WidgetBase::draw_triangle(Point A, Point B, Point C)
{
    super.draw_triangle(A, B, C);
}
void GUI::WidgetBase::draw_text(int row, int column, char *text)
{
    super.draw_text(row, column, text);
}
void GUI::WidgetBase::draw_translate(int x, int y)
{
    super.draw_translate(x, y);
}