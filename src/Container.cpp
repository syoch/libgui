#include <Container.hpp>

GUI::Container::Container(ContainerBase &super, int x, int y, int w, int h)
    : ContainerBase(x, y, w, h), WidgetBase(super, x, y, w, h)
{
}
void GUI::Container::_draw()
{
    ContainerBase::_draw();
}
void GUI::Container::hide()
{
    WidgetBase::hide();
}
void GUI::Container::show()
{
    WidgetBase::show();
}