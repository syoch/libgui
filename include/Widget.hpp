#pragma once
#ifndef LIBGUI_WIDGET
#define LIBGUI_WIDGET
#include <WidgetBase.hpp>

namespace gui
{
    class Widget : public WidgetBase
    {
    public:
        Widget(int x, int y, int w, int h);
    };
}

#endif