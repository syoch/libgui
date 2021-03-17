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
        void draw() override;
        void ontouch(Pos &pos) override;
        void oninput(InputData &input) override;
        void add(Widget &);

    private:
        Vector<Widget &> widgets;
    };
} // namespace GUI

#endif