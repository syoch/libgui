#include <Widget.hpp>

#include <utils.hpp>

namespace GUI
{
    Widget::Widget(converterT conv, int x, int y, int w, int h, bool isHidden)
        : pos((Pos){x, y}), size((Size){w, h}), converter(conv), isHidden(isHidden)
    {
    }
    Widget::Widget(converterT converter, int x, int y, int w, int h)
        : Widget::Widget(converter, x, y, w, h, false)
    {
    }
    Widget::Widget(int x, int y, int w, int h)
        : Widget::Widget(utils::defaultConverter, x, y, w, h, false)
    {
    }
    void Widget::setHidden(bool flag)
    {
        isHidden = flag;
    }
} // namespace GUI
