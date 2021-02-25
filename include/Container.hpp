#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "WidgetBase.hpp"

namespace gui
{
    class Container : public WidgetBase
    {
    private:
        std::vector<WidgetBase> childrens;

    public:
        void pushWidget(WidgetBase widget);
    };
}

#endif