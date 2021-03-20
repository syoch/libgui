#include <Widget.hpp>

#include <Manager.hpp>
#include <utils.hpp>

namespace GUI
{
    Widget::Widget(int x, int y, int w, int h, converterT conv, bool isHidden)
        : pos((Pos){x, y}), size((Size){w, h}), converter(conv), isHidden(isHidden)
    {
    }
    Widget::~Widget()
    {
    }
    void Widget::setHidden(bool flag)
    {
        isHidden = flag;
    }
} // namespace GUI
