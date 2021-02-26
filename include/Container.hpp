#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "ContainerBase.hpp"

namespace GUI
{
    class Container : public ContainerBase
    {
    private:
        ContainerBase &super;

    public:
        Container(GUI::ContainerBase &_super, int x, int y, int w, int h);
        void _draw();

        std::vector<WidgetBase> childrens;
    };
}

#endif