#include <Container.hpp>

void gui::Container::_draw()
{
    for (auto elem : childrens)
    {
        elem._draw();
    }
}
gui::Container::Container(gui::ContainerBase &_super, int x, int y, int w, int h)
    : super(_super), ContainerBase(x, y, w, h)
{
}