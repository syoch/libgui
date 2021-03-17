#include <Container.hpp>

namespace GUI
{
    void Container::add(Widget &widget)
    {
        widgets.emplace_back(widget);
    }

    void Container::draw()
    {
        for (auto widget : widgets)
        {
            widget.get().draw();
        }
    }
} // namespace GUI
