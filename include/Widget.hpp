#pragma once
#ifndef LIBGUI_WIDGET
#define LIBGUI_WIDGET
#include <WidgetBase.hpp>

namespace gui
{
    class Container;
    class Widget : public WidgetBase
    {
    public:
        Widget(gui::Container &_super, int x, int y, int w, int h);
    };
}

#endif