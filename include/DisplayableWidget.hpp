#pragma once
#ifndef LIBGUI_DRAW_WRAPPER
#define LIBGUI_DRAW_WRAPPER

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