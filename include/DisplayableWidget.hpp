#pragma once
#ifndef LIBGUI_DISPLAYABLE_WIDGET
#define LIBGUI_DISPLAYABLE_WIDGET

#include <vector>
#include "WidgetBase.hpp"

namespace gui
{
    class Container;

    class DisplayableWidget : public WidgetBase
    {
        Container &super;

    public:
        using WidgetBase::WidgetBase;
        DisplayableWidget(Container &super, int x, int y, int w, int h);
    };
}

#endif