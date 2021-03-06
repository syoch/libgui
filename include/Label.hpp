#pragma once
#ifndef LIBGUI_LABEL
#define LIBGUI_LABEL

#include <vector>
#include <string>
#include "Widget.hpp"

namespace GUI
{
    class Scroll : public Widget
    {
    public:
        using Widget::Widget;
        Scroll(ContainerBase &super, int x, int y, int w, int h);

        void draw() override;

    private:
        std::wstring text;
    };
}

#endif