#include <ContainerBase.hpp>

void gui::ContainerBase::_draw()
{
    for (auto elem : childrens)
    {
        elem._draw();
    }
}