#include <Container.hpp>

void gui::Container::pushWidget(gui::Widget widget)
{
    childrens.push_back(widget);
}