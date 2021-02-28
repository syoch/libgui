#pragma once
#ifndef LIBGUI_DISPLAYABLE_WIDGET
#define LIBGUI_DISPLAYABLE_WIDGET

#include <vector>
#include "Base.hpp"

namespace GUI
{
    class ContainerBase;

    class DisplayableWidget : public Base
    {
        ContainerBase &super;

    public:
        using Base::Base;
        DisplayableWidget(ContainerBase &super, int x, int y, int w, int h);
    };
}

#endif