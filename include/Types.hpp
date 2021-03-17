#pragma once
#ifndef LIBGUI_TYPES
#define LIBGUI_TYPES

#include <functional>

namespace GUI
{
    class Pos
    {
        int x, y;
    };
    class Size
    {
        int w, h;
    };

    using Str = str_t;
    using Color = color_t;
    using InputData = input_t;

    class DrawInfo
    {
        Pos pos;
        Size size;
        Color color;
    }

    using converterT = std::function<Pos &, (Pos &)>;
} // namespace GUI

#endif