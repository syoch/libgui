#pragma once
#ifndef LIBGUI_CONTAINER_BASE
#define LIBGUI_CONTAINER_BASE

#include <vector>
#include <bits/refwrap.h>
#include "DisplayableWidget.hpp"

namespace GUI
{
    class ContainerBase : public WidgetBase
    {
    public:
        using WidgetBase::WidgetBase;
        void onTouch(int x, int y) override;
        void onButton(uint32_t key) override;

        void _draw() override;

        std::vector<std::reference_wrapper<WidgetBase>> childrens;
    };
}

#endif