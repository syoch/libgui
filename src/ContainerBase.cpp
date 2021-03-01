#include <ContainerBase.hpp>
#include "Base.hpp"
#include <DrawWrapper.hpp>

GUI::ContainerBase::ContainerBase(int x, int y, int w, int h)
    : Base(x, y, w, h), childrens(std::vector<std::reference_wrapper<Base>>())
{
}
void GUI::ContainerBase::_draw()
{
    if (isRelative)
        draw_translate(pos.x, pos.y);
    for (Base &elem : childrens)
    {
        elem._draw();
    }
    if (isRelative)
        draw_translate(-pos.x, -pos.y);
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