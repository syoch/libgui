#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "DisplayableWidget.hpp"

namespace gui
{
    class Container : public DisplayableWidget
    {
    public:
        using DisplayableWidget::DisplayableWidget;

        void _draw();

        std::vector<WidgetBase> childrens;
    };
}

#endif