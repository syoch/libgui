#include <ContainerBase.hpp>
#include "Base.hpp"
void GUI::ContainerBase::_draw()
{
    for (Base &elem : childrens)
    {
        elem._draw();
    }
}
void GUI::ContainerBase::onTouch(int x, int y)
{
    for (Base child : childrens)
    {
        if (
            (child.pos.x <= x && x <= child.pos.x + child.size.width) ||
            (child.pos.y <= y && y <= child.pos.y + child.size.height))
        {
            child.onTouch(x - child.pos.x, y - child.pos.y);
            break;
        }
    }
}
void GUI::ContainerBase::onButton(uint32_t key)
{
    for (Base child : childrens)
    {
        child.onButton(key);
    }
}