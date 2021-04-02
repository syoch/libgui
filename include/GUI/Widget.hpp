#pragma once
#ifndef LIBGUI_WIDGET
#define LIBGUI_WIDGET

#include <functional>

#include <GUI/Types.hpp>

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
        bool getHidden();
        virtual void _draw();
        virtual void draw() = 0;
        virtual void ontouch(TouchEvent &pos) = 0;
        virtual void oninput(InputData &input) = 0;

        Pos pos;
        Size size;
        converterT converter;

        // Engine wrapper
        bool init();
        bool exit();
        bool text(DrawInfo, Str);
        bool rect2(DrawInfo, DrawInfo);
        bool rect4(DrawInfo, DrawInfo, DrawInfo, DrawInfo);
        bool triangle(DrawInfo, DrawInfo, DrawInfo);
        bool line(DrawInfo, DrawInfo);
        bool circle(DrawInfo, DrawInfo);

    private:
        bool isHidden;
    };
} // namespace GUI

#endif