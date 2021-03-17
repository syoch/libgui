#pragma once
#ifndef LIBGUI_TYPES
#define LIBGUI_TYPES

#include <functional>
#include "config.h"

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

    class DrawInfo
    {
        Pos pos;
        Size size;
        Color color;
    };

    using converterT = std::function<Pos &(Pos &)>;
} // namespace GUI

#endif