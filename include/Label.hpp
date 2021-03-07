#pragma once
#ifndef LIBGUI_LABEL
#define LIBGUI_LABEL

#include <vector>
#include <string>
#include "Widget.hpp"

namespace GUI
{
    template <typename T>
    class Label : public Widget
    {
    public:
        using Widget::Widget;
        Label(ContainerBase &super, int x, int y, int w, int h, T text)
            : Widget(super, x, y, w, h), text(text)
        {
        }

        void draw() override
        {
            if (typeid(T) == typeid(std::string))
            {
                draw_text(0, 0, (char *)text.c_str(), (GUI::Color){0, 0, 0, 0});
            }
            else
            {
                draw_text(0, 0, (char *)"#NIMP#", (GUI::Color){0, 0, 0, 0});
            }
        };

    private:
        T text;
    };
}

#endif