#include <GUI/Container.hpp>

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
    void Container::ontouch(TouchEvent &data)
    {
        for (auto &&widget : widgets)
        {
            if (widget->getHidden())
                continue;
            if ((widget->pos.x <= data.pos.x && data.pos.x <= widget->pos.x + widget->size.w) &&
                (widget->pos.y <= data.pos.y && data.pos.y <= widget->pos.y + widget->size.h))
            {
                data.pos.x -= widget->pos.x;
                data.pos.y -= widget->pos.y;
                widget->ontouch(data);
                break;
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
    int Container::widgetsCount()
    {
        return widgets.size();
    }
} // namespace GUI
