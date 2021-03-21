#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <functional>

#include <Widget.hpp>

namespace GUI
{
    class Container : public Widget
    {
    public:
        using Widget::Widget;
        ~Container();
        void draw() override;
        void ontouch(Pos &pos) override;
        void oninput(InputData &input) override;
        Container &add(Widget &);

    private:
        WidVec widgets;
    };
} // namespace GUI

#endif