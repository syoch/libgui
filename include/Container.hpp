#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "DisplayableWidget.hpp"

namespace gui
{
    class Container : public WidgetBase
    {
    public:
        using WidgetBase::WidgetBase;
        void _draw();

        std::vector<WidgetBase> childrens;
    };
}

#endif