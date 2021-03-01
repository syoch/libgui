#include <Container.hpp>

GUI::Container::Container(ContainerBase &super, int x, int y, int w, int h)
    : WidgetBase(super, x, y, w, h), ContainerBase(x, y, w, h)
{
}
void GUI::Container::_draw()
{
    ContainerBase::_draw();
}