#include <Container.hpp>

void gui::Container::pushWidget(gui::WidgetBase widget)
{
    childrens.push_back(widget);
}