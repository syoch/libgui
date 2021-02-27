#include <ContainerBase.hpp>
#include "WidgetBase.hpp"
void GUI::ContainerBase::_draw()
{
    for (WidgetBase elem : childrens)
    {
        elem._draw();
    }
}
void GUI::ContainerBase::onTouch(int x, int y)
{
    for (WidgetBase child : childrens)
    {
        if (
            child.pos.x <= x && x <= child.pos.x + child.size.width ||
            child.pos.y <= y && y <= child.pos.y + child.size.height)
        {
            child.onTouch(x - child.pos.x, y - child.pos.y);
            break;
        }
    }
}
void GUI::ContainerBase::onButton(uint32_t key)
{
    for (WidgetBase child : childrens)
    {
        child.onButton(key);
    }
}