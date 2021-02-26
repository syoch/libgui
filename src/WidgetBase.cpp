#include <WidgetBase.hpp>

#include <inttypes.h>

#include "Types.hpp"
#include "Container.hpp"

namespace gui
{
    void WidgetBase::draw_line(Point start, Point end)
    {
    }
    void WidgetBase::draw_rect(Point start, Point end)
    {
    }
    void WidgetBase::draw_triangle(Point A, Point B, Point C)
    {
    }
    void WidgetBase::draw_text(int row, int column, char *)
    {
    }
    void WidgetBase::draw_translate(int x, int y)
    {
    }
    void WidgetBase::draw()
    {
    }
    void WidgetBase::_draw()
    {
    }
    void WidgetBase::onTouch(int x, int y)
    {
    }
    void WidgetBase::onButton(uint32_t key)
    {
    }
    WidgetBase::WidgetBase(gui::ContainerBase &_super, int x, int y, int w, int h)
    {
        pos = ((Point){x, y});
        size = ((Size){w, h});
        _super.childrens.emplace_back(*this);
    }
    WidgetBase::WidgetBase(int x, int y, int w, int h)
    {
        pos = ((Point){x, y});
        size = ((Size){w, h});
    }
}