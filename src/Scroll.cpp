#include <Scroll.hpp>

void GUI::Scroll::up(int dy)
{
    yOffset -= dy;
}
void GUI::Scroll::down(int dy)
{
    yOffset += dy;
}