#pragma once
#ifndef LIBGUI_TYPES
#define LIBGUI_TYPES

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
} // namespace GUI

#endif