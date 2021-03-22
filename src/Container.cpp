#include <Container.hpp>
namespace GUI
{
    Container::~Container()
    {
        for (auto &&widget : widgets)
        {
            delete widget;
        }
    }
    Pos &Container::converterForWidget(Pos &src)
    {
        converter(src);
        src.x += pos.x;
        src.y += pos.y;
        return src;
    }

    void Container::draw()
    {
        for (auto widget : widgets)
        {
            widget->_draw();
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
