#pragma once
#ifndef LIBGUI_WIDGET
#define LIBGUI_WIDGET

#include <functional>

#include <Types.hpp>

namespace GUI
{
    class Widget
    {
    public:
        Widget(converterT converter, int x, int y, int w, int h);
        void setHidden(bool flag);

        virtual void draw();
        virtual void ontouch(Pos &pos);
        virtual void oninput(InputData &input);

    private:
        converterT converter;
        bool isHidden;
    };
} // namespace GUI

#endif