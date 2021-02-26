#pragma once
#ifndef LIBGUI_WIDGET
#define LIBGUI_WIDGET
#include <DisplayableWidget.hpp>

namespace gui
{
    class Widget : public DisplayableWidget
    {
    public:
        using DisplayableWidget::DisplayableWidget;
    };
}

#endif