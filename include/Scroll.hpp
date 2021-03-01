#pragma once
#ifndef LIBGUI_SCROLL
#define LIBGUI_SCROLL

#include <vector>
#include "ContainerBase.hpp"

namespace GUI
{
    class Scroll : public ContainerBase, public WidgetBase
    {
        void draw_line(GUI::Point start, GUI::Point end);
        void draw_rect(GUI::Point start, GUI::Point end);
        void draw_triangle(GUI::Point A, GUI::Point B, GUI::Point C);
        void draw_text(int row, int column, char *);
        void draw_translate(int x, int y);

    public:
        using WidgetBase::WidgetBase;
        void down(int dy);
        void up(int dy);

    private:
        int yOffset;
    };
}

#endif