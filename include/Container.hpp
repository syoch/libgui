#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "ContainerBase.hpp"

namespace gui
{
    class Container : public ContainerBase
    {
    public:
        using ContainerBase::ContainerBase;
        void _draw();

        std::vector<WidgetBase> childrens;
    };
}

#endif