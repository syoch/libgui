#include <WidgetBase.hpp>

#include <inttypes.h>

#include "Types.hpp"
#include "Container.hpp"
#include "DrawWrapper.hpp"

namespace GUI
{
    void WidgetBase::draw_line(Point start, Point end)
    {
        GUI::draw_line(start, end);
    }
    void WidgetBase::draw_rect(Point start, Point end)
    {
        GUI::draw_rect(start, end);
    }
    void WidgetBase::draw_triangle(Point A, Point B, Point C)
    {
        GUI::draw_triangle(A, B, C);
    }
    void WidgetBase::draw_text(int row, int column, char *text)
    {
        GUI::draw_text(row, column, text);
    }
    void WidgetBase::draw_translate(int x, int y)
    {
        GUI::draw_translate(x, y);
    }
    void WidgetBase::draw()
    {
    }
    void WidgetBase::_draw()
    {
        if (isRelative)
            draw_translate(pos.x, pos.y);
        draw();
        if (isRelative)
            draw_translate(-pos.x, -pos.y);
    }
    void WidgetBase::onTouch(int x, int y)
    {
    }
    void WidgetBase::onButton(uint32_t key)
    {
    }
    WidgetBase::WidgetBase(GUI::ContainerBase &_super, int x, int y, int w, int h)
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