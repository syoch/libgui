#include <Base.hpp>

#include <inttypes.h>

#include "Types.hpp"
#include "Container.hpp"
#include "DrawWrapper.hpp"

namespace GUI
{
    void Base::draw_line(Point start, Point end)
    {
        GUI::draw_line(start, end);
    }
    void Base::draw_rect(Point start, Point end)
    {
        GUI::draw_rect(start, end);
    }
    void Base::draw_triangle(Point A, Point B, Point C)
    {
        GUI::draw_triangle(A, B, C);
    }
    void Base::draw_text(int row, int column, char *text)
    {
        GUI::draw_text(row, column, text);
    }
    void Base::draw_translate(int x, int y)
    {
        GUI::draw_translate(x, y);
    }
    void Base::draw()
    {
    }
    void Base::_draw()
    {
        if (isRelative)
            draw_translate(pos.x, pos.y);
        draw();
        if (isRelative)
            draw_translate(-pos.x, -pos.y);
    }
    void Base::onTouch(int x, int y)
    {
    }
    void Base::onButton(uint32_t key)
    {
    }
    Base::Base(GUI::ContainerBase &_super, int x, int y, int w, int h)
    {
        pos = ((Point){x, y});
        size = ((Size){w, h});
        _super.childrens.emplace_back(*this);
    }
    Base::Base(int x, int y, int w, int h)
    {
        pos = ((Point){x, y});
        size = ((Size){w, h});
    }
}