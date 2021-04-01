#pragma once
#ifndef LIBGUI_TYPES
#define LIBGUI_TYPES

#include <functional>
#include "baseTypes.hpp"

#include "config.h"

namespace GUI
{
    class DrawInfo
    {
    public:
        Pos pos;
        Color color;
    };

    using converterT = std::function<Pos &(Pos &)>;
} // namespace GUI

#endif