#include <GUI/Widget.hpp>

#include <GUI/Manager.hpp>
#include <GUI/utils.hpp>
#include <GUI/DrawWrapper.hpp>

namespace GUI
{
    Widget::Widget(int x, int y, int w, int h, bool isHidden)
        : pos((Pos){x, y}), size((Size){w, h}), isHidden(isHidden)
    {
        converter = converterT(&utils::defaultConverter);
    }
    Widget::~Widget()
    {
    }
    void Widget::setHidden(bool flag)
    {
        isHidden = flag;
    }
    void Widget::_draw()
    {
        if (!isHidden)
        {
            draw();
        }
    }
    bool Widget::text(DrawInfo a, Str str)
    {
        converter(a.pos);
        a.pos.x += pos.x;
        a.pos.y += pos.y;
        return render::text(a, str);
    }
    bool Widget::rect2(DrawInfo a, DrawInfo b)
    {
        converter(a.pos);
        a.pos.x += pos.x;
        a.pos.y += pos.y;
        converter(b.pos);
        b.pos.x += pos.x;
        b.pos.y += pos.y;
        return render::rect2(a, b);
    }
    bool Widget::rect4(DrawInfo a, DrawInfo b, DrawInfo c, DrawInfo d)
    {
        converter(a.pos);
        a.pos.x += pos.x;
        a.pos.y += pos.y;
        converter(b.pos);
        b.pos.x += pos.x;
        b.pos.y += pos.y;
        converter(c.pos);
        c.pos.x += pos.x;
        b.pos.y += pos.y;
        converter(d.pos);
        d.pos.x += pos.x;
        b.pos.y += pos.y;
        return render::rect4(a, b, c, d);
    }
    bool Widget::triangle(DrawInfo a, DrawInfo b, DrawInfo c)
    {
        converter(a.pos);
        a.pos.x += pos.x;
        a.pos.y += pos.y;
        converter(b.pos);
        b.pos.x += pos.x;
        b.pos.y += pos.y;
        converter(c.pos);
        c.pos.x += pos.x;
        b.pos.y += pos.y;
        return render::triangle(a, b, c);
    }
    bool Widget::line(DrawInfo a, DrawInfo b)
    {
        converter(a.pos);
        a.pos.x += pos.x;
        a.pos.y += pos.y;
        converter(b.pos);
        b.pos.x += pos.x;
        b.pos.y += pos.y;
        return render::line(a, b);
    }
    bool Widget::circle(DrawInfo a, DrawInfo b)
    {
        converter(a.pos);
        a.pos.x += pos.x;
        a.pos.y += pos.y;
        converter(b.pos);
        b.pos.x += pos.x;
        b.pos.y += pos.y;
        return render::circle(a, b);
    }
} // namespace GUI
