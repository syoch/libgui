#pragma once
#ifndef LIBGUI_MANAGER
#define LIBGUI_MANAGER

#include <Types.hpp>
#include <Widget.hpp>

namespace GUI
{
    class Manager
    {
    public:
        void draw();
        void ontouch(Pos &pos);
        void oninput(InputData &input);
        Manager &add(Widget &&);
        Manager &add(Widget &);

    private:
        Vector<std::reference_wrapper<Widget>> widgets;
    };
} // namespace GUI

#endif