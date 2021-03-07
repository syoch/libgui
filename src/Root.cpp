#include <Root.hpp>
#include <DrawWrapper.hpp>

void GUI::Root::draw_line(DrawPoint start, DrawPoint end)
{
    GUI::draw_line(start, end);
}
void GUI::Root::draw_rect(DrawPoint start, DrawPoint end)
{
    GUI::draw_rect(start, end);
}
void GUI::Root::draw_rect(DrawPoint A, DrawPoint B, DrawPoint C, DrawPoint D)
{
    GUI::draw_rect(A, B, C, D);
}
void GUI::Root::draw_triangle(DrawPoint A, DrawPoint B, DrawPoint C)
{
    GUI::draw_triangle(A, B, C);
}
void GUI::Root::draw_text(int row, int column, char *text, Color color)
{
    GUI::draw_text(row, column, text, color);
}
void GUI::Root::draw_translate(int x, int y)
{
    GUI::_draw_translate(x, y);
}
void GUI::Root::_draw()
{
    GUI::draw_begin();
    ContainerBase::_draw();
    GUI::draw_end();
}
GUI::Root::Root()
    : GUI::ContainerBase(0, 0, 0, 0)
{
}