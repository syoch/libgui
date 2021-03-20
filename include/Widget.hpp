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

    class Manager;
    class Widget
    {
    public:
        Widget(
            int x, int y, int w, int h,
            converterT conv = utils::defaultConverter,
            bool isHidden = false);

        virtual ~Widget();

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