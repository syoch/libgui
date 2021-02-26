#pragma once
#ifndef LIBGUI_ROOT
#define LIBGUI_ROOT

#include <vector>
#include "ContainerBase.hpp"

namespace GUI
{
    class Root : public ContainerBase
    {
        void draw_line(GUI::Point start, GUI::Point end);
        void draw_rect(GUI::Point start, GUI::Point end);
        void draw_triangle(GUI::Point A, GUI::Point B, GUI::Point C);
        void draw_text(int row, int column, char *);
        void draw_translate(int x, int y);

    public:
        void onTouch(int x, int y);
        void onButton(uint32_t key);
        Root();
    };
}

#endif