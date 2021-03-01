#include <DrawWrapper.hpp>

void GUI::_draw_translate(int x, int y)
{
    if (x == 0 && y == 0)
        return;

    GUI::draw_translate(x, y);
}