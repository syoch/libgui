#pragma once
#ifndef LIBGUI_WIDGET
#define LIBGUI_WIDGET

#include <functional>

#include <Types.hpp>

namespace GUI
{
    namespace utils
    {
        GUI::Pos &defaultConverter(GUI::Pos &);
    } // namespace utils

    class Widget
    {
    public:
        Widget(
            int x = 0, int y = 0, int w = 0, int h = 0,
            bool isHidden = false);

        virtual ~Widget();

        void setHidden(bool flag);

        virtual void draw() = 0;
        virtual void ontouch(Pos &pos) = 0;
        virtual void oninput(InputData &input) = 0;

        Pos pos;
        Size size;
        converterT converter;

    private:
        bool isHidden;
    };
} // namespace GUI

#endif