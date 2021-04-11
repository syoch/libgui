#pragma once
#ifndef LIBGUI_SCROLL
#define LIBGUI_SCROLL

#include <vector>
#include "Container.hpp"

namespace GUI
{
    class Scroll : public Container
    {
    public:
        using Container::Container;
        void down(int dy);
        void up(int dy);
        void right(int dy);
        void left(int dy);
        void horizontal(int dx);
        void vertical(int dy);

        Pos &conv(Pos &src);

        template <typename T, typename... Args>
        T *add(Args... args)
        {
            auto obj = Container::add<T>(args...);

            obj->converter = static_cast<converterT>(std::bind(&GUI::Scroll::conv, this, std::placeholders::_1));
            return obj;
        }

    private:
        int yOffset = 0;
        int xOffset = 0;
    };
}

#endif