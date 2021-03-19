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
        Container &add(Widget &&);
        Container &add(Widget &);
        Container &add(Widget *);

    private:
        Vector<std::reference_wrapper<Widget>> widgets;
    };
} // namespace GUI

#endif