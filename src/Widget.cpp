#include <Widget.hpp>

gui::Widget::Widget(gui::Container _super, int x, int y, int w, int h)
{
    super = _super;
    pos = ((Point){x, y});
    size = ((Size){w, h});
    _super.pushWidget(*this);
}
gui::Widget::Widget(gui::Root _super, int x, int y, int w, int h)
{
    super = _super;
    pos = ((Point){x, y});
    size = ((Size){w, h});
    _super.pushWidget(*this);
}