#include <Manager.hpp>

namespace GUI
{
    void Manager::add(Widget &widget)
    {
        widgets.emplace_back(widget);
    }

    void Manager::draw()
    {
        for (auto widget : widgets)
        {
            widget.get().draw();
        }
    }
    void Manager::ontouch(Pos &data)
    {
        for (auto &&widget : widgets)
        {
            if ((widget.get().pos.x <= data.x && data.x <= widget.get().pos.x + widget.get().size.w) ||
                (widget.get().pos.y <= data.y && data.y <= widget.get().pos.y + widget.get().size.h))
            {
                data.x -= widget.get().pos.x;
                data.y -= widget.get().pos.y;
                widget.get().ontouch(data);
            }
        }
    }
    void Manager::oninput(InputData &data)
    {
        for (auto &&widget : widgets)
        {
            widget.get().oninput(data);
        }
    }
} // namespace GUI
