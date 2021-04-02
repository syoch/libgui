#pragma once
#ifndef LIBGUI_BASETYPES

namespace GUI
{
    class Pos
    {
    public:
        int x, y;
    };
    class Size
    {
    public:
        int w, h;
    };

    struct TouchEvent
    {
        GUI::Pos pos;
        enum Type
        {
            START,
            MOVE,
            END,
            NONE
        } type;
        int _istouched;

        // member for type: MOVE
        int dx, dy;
    };
} // namespace GUI

#endif
