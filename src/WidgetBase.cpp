#include <WidgetBase.hpp>
#include <ContainerBase.hpp>

GUI::WidgetBase::WidgetBase(GUI::ContainerBase &_super, int x, int y, int w, int h)
    : Base(x, y, w, h), super(_super)
{
    _super.childrens.emplace_back(*this);
}

void GUI::WidgetBase::draw_line(DrawPoint start, DrawPoint end)
{
    super.draw_line(start, end);
}
void GUI::WidgetBase::draw_rect(DrawPoint start, DrawPoint end)
{
    super.draw_rect(start, end);
}
void GUI::WidgetBase::draw_rect(DrawPoint A, DrawPoint B, DrawPoint C, DrawPoint D)
{
    super.draw_rect(A, B, C, D);
}
void GUI::WidgetBase::draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C)
{
    super.draw_triangle(A, B, C);
}
void GUI::WidgetBase::draw_text(int row, int column, char *text, Color color)
{
    super.draw_text(row, column, text, color);
}
void GUI::WidgetBase::draw_textShadow(int row, int column, char *text, Color color)
{
    super.draw_textShadow(row, column, text, color);
}
void GUI::WidgetBase::draw_translate(int x, int y)
{
    super.draw_translate(x, y);
}