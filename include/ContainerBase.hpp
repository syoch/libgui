#pragma once
#ifndef LIBGUI_CONTAINER_BASE
#define LIBGUI_CONTAINER_BASE

#include <vector>
#include <bits/refwrap.h>
#include "WidgetBase.hpp"

namespace GUI
{
    class ContainerBase : public Base
    {
    public:
        using Base::Base;
        ContainerBase(int x, int y, int w, int h);

        void onTouch(int x, int y) override;
        void onButton(uint32_t key) override;

        void _draw() override;

        std::vector<std::reference_wrapper<Base>> childrens;
    };
}

#endif