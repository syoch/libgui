#include <Label.hpp>

GUI::Label::Label(GUI::ContainerBase &super, int x, int y, int w, int h, std::wstring text)
    : text(text), Widget(super, x, y, w, h)
{
}

void GUI::Label::draw()
{
    draw_text(0, 0, "", (Color){0, 0, 0, 0});
}