#pragma once
#ifndef LIBGUI_LABEL
#define LIBGUI_LABEL

#include <vector>
#include <string>
#include "Widget.hpp"

namespace GUI
{
    class Label : public Widget
    {
    public:
        using Widget::Widget;
        Label(ContainerBase &super, int x, int y, int w, int h, std::wstring text);

        void draw() override;

    private:
        std::wstring text;
    };
}

#endif