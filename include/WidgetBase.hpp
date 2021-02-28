#pragma once
#ifndef LIBGUI_DISPLAYABLE_WIDGET
#define LIBGUI_DISPLAYABLE_WIDGET

#include <vector>
#include "Base.hpp"

namespace GUI
{
    class ContainerBase;

    class WidgetBase : public Base
    {
        ContainerBase &super;

    public:
        using Base::Base;
        WidgetBase(ContainerBase &super, int x, int y, int w, int h);
    };
}

#endif