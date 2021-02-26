#pragma once
#ifndef LIBGUI_DISPLAYABLE_WIDGET
#define LIBGUI_DISPLAYABLE_WIDGET

#include <vector>
#include "WidgetBase.hpp"

namespace GUI
{
    class ContainerBase;

    class DisplayableWidget : public WidgetBase
    {
        ContainerBase &super;

    public:
        using WidgetBase::WidgetBase;
        DisplayableWidget(ContainerBase &super, int x, int y, int w, int h);
    };
}

#endif