#include <Widget.hpp>

gui::Widget::Widget(int x, int y, int w, int h)
{
    pos = ((Point){x, y});
    size = ((Size){w, h});
}