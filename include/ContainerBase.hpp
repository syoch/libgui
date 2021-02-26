#pragma once
#ifndef LIBGUI_CONTAINER_BASE
#define LIBGUI_CONTAINER_BASE

#include <vector>
#include "DisplayableWidget.hpp"

namespace GUI
{
    class ContainerBase : public WidgetBase
    {
    public:
        using WidgetBase::WidgetBase;
        void onTouch(int x, int y);
        void onButton(uint32_t key);

        void _draw();

        std::vector<WidgetBase> childrens;
    };
}

#endif