#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "ContainerBase.hpp"

namespace gui
{
    class Container : public ContainerBase
    {
    private:
        ContainerBase &super;

    public:
        Container(gui::ContainerBase &_super, int x, int y, int w, int h);
        void _draw();

        std::vector<WidgetBase> childrens;
    };
}

#endif