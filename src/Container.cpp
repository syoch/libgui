#include <Container.hpp>

void gui::Container::_draw()
{
    for (auto elem : childrens)
    {
        elem._draw();
    }
}