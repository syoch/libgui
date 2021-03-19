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
        Widget(converterT conv, int x, int y, int w, int h, bool isHidden);
        Widget(converterT converter, int x, int y, int w, int h);
        Widget(int x, int y, int w, int h);
        void setHidden(bool flag);

        virtual void draw() = 0;
        virtual void ontouch(Pos &pos) = 0;
        virtual void oninput(InputData &input) = 0;

        Pos pos;
        Size size;

    protected:
        converterT converter;

    private:
        bool isHidden;
    };
} // namespace GUI

#endif