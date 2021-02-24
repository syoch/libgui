#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "Widget.hpp"

namespace gui
{
    class Container : public Widget
    {
    private:
        std::vector<Widget> childrens;

    public:
        void pushWidget(Widget widget);
    };
}

#endif