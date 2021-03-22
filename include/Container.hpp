#pragma once
#ifndef LIBGUI_CONTAINER
#define LIBGUI_CONTAINER

#include <functional>

#include <Widget.hpp>

namespace GUI
{
    class Container : public Widget
    {
    public:
        using Widget::Widget;
        ~Container();
        void draw() override;
        void ontouch(Pos &pos) override;
        void oninput(InputData &input) override;
        template <typename T, typename... Args>
        T *add(Args... args)
        {
            T *obj = new T(args...);
            widgets.emplace_back(obj);

            using namespace std::placeholders;

            obj->converter = static_cast<converterT>(std::bind(&GUI::Container::converterForWidget, this, std::placeholders::_1));
            return obj;
        }

        template <typename T>
        T *get(size_t i)
        {
            return widgets[i];
        }

        Pos &converterForWidget(Pos &);

    private:
        WidVec widgets;
    };
} // namespace GUI

#endif