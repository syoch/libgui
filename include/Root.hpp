#pragma once
#ifndef LIBGUI_ROOT
#define LIBGUI_ROOT

#include <vector>
#include "WidgetBase.hpp"
#include "Container.hpp"

namespace gui
{
    class Root : public Container
    {
        void draw_line(gui::Point start, gui::Point end);
        void draw_rect(gui::Point start, gui::Point end);
        void draw_triangle(gui::Point A, gui::Point B, gui::Point C);
        void draw_text(int row, int column, char *);
        void draw_translate(int x, int y);

    public:
        void onTouch(int x, int y);
        void onButton(uint32_t key);
        Root();
    };
}

#endif