#include <Container.hpp>

void GUI::Container::_draw()
{
    for (auto elem : childrens)
    {
        elem._draw();
    }
}
GUI::Container::Container(GUI::ContainerBase &_super, int x, int y, int w, int h)
    : super(_super), ContainerBase(x, y, w, h)
{
}