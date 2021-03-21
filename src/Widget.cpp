#include <Widget.hpp>

#include <Manager.hpp>
#include <utils.hpp>
#include <DrawWrapper.hpp>

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

    bool Widget::text(DrawInfo a, Str str)
    {
        converter(a.pos);
        return render::text(a, str);
    }
    bool Widget::rect2(DrawInfo a, DrawInfo b)
    {
        converter(a.pos);
        converter(b.pos);
        return render::rect2(a, b);
    }
    bool Widget::rect4(DrawInfo a, DrawInfo b, DrawInfo c, DrawInfo d)
    {
        converter(a.pos);
        converter(b.pos);
        converter(c.pos);
        converter(d.pos);
        return render::rect4(a, b, c, d);
    }
    bool Widget::triangle(DrawInfo a, DrawInfo b, DrawInfo c)
    {
        converter(a.pos);
        converter(b.pos);
        converter(c.pos);
        return render::triangle(a, b, c);
    }
    bool Widget::line(DrawInfo a, DrawInfo b)
    {
        converter(a.pos);
        converter(b.pos);
        return render::line(a, b);
    }
    bool Widget::circle(DrawInfo a, DrawInfo b)
    {
        converter(a.pos);
        converter(b.pos);
        return render::circle(a, b);
    }
} // namespace GUI
