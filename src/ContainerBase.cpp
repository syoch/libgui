#include <ContainerBase.hpp>

void GUI::ContainerBase::_draw()
{
    for (auto elem : childrens)
    {
        elem._draw();
    }
}