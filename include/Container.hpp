#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "WidgetBase.hpp"

namespace gui
{
    class Container : public WidgetBase
    {
    public:
        void _draw();

        std::vector<WidgetBase> childrens;
    };
}

#endif