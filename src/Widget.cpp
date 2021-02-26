#include <Widget.hpp>

gui::Widget::Widget(gui::Container &_super, int x, int y, int w, int h)
    : super(_super)
{
    pos = ((Point){x, y});
    size = ((Size){w, h});
    _super.childrens.emplace_back(*this);
}