#pragma once
#ifndef LIBGUI_DISPLAYABLE_WIDGET
#define LIBGUI_DISPLAYABLE_WIDGET

#include <vector>
#include "WidgetBase.hpp"

namespace gui
{
    class DisplayableWidget : public WidgetBase
    {
    public:
        using WidgetBase::WidgetBase;
    };
}

#endif