#include <DrawWrapper.hpp>

void GUI::_draw_translate(float x, float y)
{
    if (x == 0 && y == 0)
        return;

    GUI::draw_translate(x, y);
}
void GUI::draw_rect(DrawPoint S, DrawPoint E)
{
    DrawPoint A = E;
    DrawPoint B = S;

    A.point.x = E.point.x;
    B.point.x = S.point.y;

    draw_rect(S, A, E, B);
}