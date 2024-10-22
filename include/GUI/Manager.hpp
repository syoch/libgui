#pragma once
#ifndef LIBGUI_MANAGER
#define LIBGUI_MANAGER

#include <GUI/Types.hpp>
#include <GUI/Container.hpp>
namespace GUI
{
    class Manager : public Container
    {
    public:
        using Container::Container;
        void render();
    };
} // namespace GUI

#endif