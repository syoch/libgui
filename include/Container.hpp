#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "WidgetBase.hpp"
#include "Widget.hpp"

namespace gui
{
    class Container : public Widget
    {
    public:
        Container();

        void _draw();

        std::vector<WidgetBase> childrens;
    };
}

#endif