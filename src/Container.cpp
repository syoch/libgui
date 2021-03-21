#include <Container.hpp>
#include <iostream>
namespace GUI
{
    Container::~Container()
    {
        for (auto &&widget : widgets)
        {
            delete widget;
        }
    }
    Container &Container::add(Widget &widget)
    {
        widgets.emplace_back(widget);
        return *this;
    }

    void Container::draw()
    {
        for (auto widget : widgets)
        {
            widget->draw();
        }
    }
    void Container::ontouch(Pos &data)
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
    void Container::oninput(InputData &data)
    {
        for (auto &&widget : widgets)
        {
            widget->oninput(data);
        }
    }
} // namespace GUI
