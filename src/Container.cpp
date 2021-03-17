#include <Container.hpp>

namespace GUI
{
    void Container::add(Widget &widget)
    {
        widgets.emplace_back(widget);
    }
} // namespace GUI
