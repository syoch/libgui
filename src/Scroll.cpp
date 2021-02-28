#include <Scroll.hpp>

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