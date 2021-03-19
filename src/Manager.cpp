#include <Manager.hpp>
#include <iostream>
namespace GUI
{
    Manager::~Manager()
    {
        for (auto &&widget : widgets)
        {
            delete widget;
        }
    }
    Manager &Manager::add(Widget &&widget)
    {
        widgets.emplace_back(&widget);
        return *this;
    }
    Manager &Manager::add(Widget &widget)
    {
        widgets.emplace_back(&widget);
        return *this;
    }
    Manager &Manager::add(Widget *widget)
    {
        widgets.emplace_back(widget);
        return *this;
    }

    void Manager::draw()
    {
        for (auto widget : widgets)
        {
            widget->draw();
        }
    }
    void Manager::ontouch(Pos &data)
    {
        for (auto &&widget : widgets)
        {
            if ((widget->pos.x <= data.x && data.x <= widget->pos.x + widget->size.w) ||
                (widget->pos.y <= data.y && data.y <= widget->pos.y + widget->size.h))
            {
                data.x -= widget->pos.x;
                data.y -= widget->pos.y;
                widget->ontouch(data);
            }
        }
    }
    void Manager::oninput(InputData &data)
    {
        for (auto &&widget : widgets)
        {
            widget->oninput(data);
        }
    }
} // namespace GUI
