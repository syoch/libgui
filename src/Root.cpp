#include <Root.hpp>
#include <DrawWrapper.hpp>

void GUI::Root::draw_line(GUI::Point start, GUI::Point end)
{
    GUI::draw_line(start, end);
}
void GUI::Root::draw_rect(GUI::Point start, GUI::Point end)
{
    GUI::draw_rect(start, end);
}
void GUI::Root::draw_triangle(GUI::Point A, GUI::Point B, GUI::Point C)
{
    GUI::draw_triangle(A, B, C);
}
void GUI::Root::draw_text(int row, int column, char *text)
{
    GUI::draw_text(row, column, text);
}
void GUI::Root::draw_translate(int x, int y)
{
    GUI::draw_translate(x, y);
}
GUI::Root::Root()
    : GUI::ContainerBase(0, 0, 0, 0)
{
}