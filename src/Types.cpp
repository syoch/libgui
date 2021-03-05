#include <Types.hpp>

GUI::Point::Point(int x, int y)
    : x(x), y(y)
{
}
GUI::Size::Size(int width, int height)
    : width(width), height(height)
{
}
GUI::Color::Color(int r, int g, int b, int a)
    : r(r), g(g), b(b), a(a)
{
}
GUI::DrawPoint::DrawPoint(Point point, Color color)
    : point(point), color(color)
{
}