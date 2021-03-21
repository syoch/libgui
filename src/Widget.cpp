#include <Widget.hpp>

#include <Manager.hpp>
#include <utils.hpp>

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
} // namespace GUI
