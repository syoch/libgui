#include <WidgetBase.hpp>

#include <inttypes.h>

#include "Point.hpp"
#include "Size.hpp"

namespace gui
{
    class WidgetBase
    {
    private:
        void draw_line(Point start, Point end)
        {
        }
        void draw_rect(Point start, Point end)
        {
        }
        void draw_triangle(Point A, Point B, Point C)
        {
        }
        void draw_text(int row, int column, char *)
        {
        }
        void draw()
        {
        }

    public:
        void _draw()
        {
        }
        virtual void onTouch(int x, int y)
        {
        }
        virtual void onButton(uint32_t key)
        {
        }
    };
}