#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <vector>
#include "ContainerBase.hpp"

namespace GUI
{
    class Container : public virtual ContainerBase, public virtual WidgetBase
    {
    public:
        Container(ContainerBase &super, int x, int y, int w, int h);
        void _draw() override;
        void hide() override;
        void show() override;
    };
}

#endif