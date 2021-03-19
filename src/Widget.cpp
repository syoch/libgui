#include <Widget.hpp>

namespace GUI
{
    Widget::Widget(converterT converter, int x, int y, int w, int h)
        : pos((Pos){x, y}), size((Size){w, h}), converter(converter)
    {
    }
    Widget::Widget(int x, int y, int w, int h)
        : pos((Pos){x, y}), size((Size){w, h})
    {
    }
    void Widget::setHidden(bool flag)
    {
        isHidden = flag;
    }
} // namespace GUI
