#pragma once
#ifndef LIBGUI_DRAW_WRAPPER
#define LIBGUI_DRAW_WRAPPER

#include <GUI/Types.hpp>

namespace GUI
{
    namespace render
    {
        bool init();
        bool exit();
        bool text(DrawInfo, Str);
        bool rect2(DrawInfo, DrawInfo);
        bool rect4(DrawInfo, DrawInfo, DrawInfo, DrawInfo);
        bool triangle(DrawInfo, DrawInfo, DrawInfo);
        bool line(DrawInfo, DrawInfo);
        bool circle(DrawInfo, DrawInfo);
    } // namespace render
}

#endif