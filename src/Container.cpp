#include <Container.hpp>

void gui::Container::pushWidget(gui::WidgetBase widget)
{
    childrens.push_back(widget);
}
void gui::Container::_draw()
{
    for (auto elem : childrens)
    {
        elem._draw();
    }
}