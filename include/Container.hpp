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
        template <typename T>
        T *add(int x, int y, int w, int h)
        {
            T *obj = new T(x, y, w, h);
            widgets.emplace_back(obj);

            using namespace std::placeholders;

            obj->converter = static_cast<converterT>(std::bind(&GUI::Container::converterForWidget, this, std::placeholders::_1));
            return obj;
        }

        Pos &converterForWidget(Pos &);

    private:
        WidVec widgets;
    };
} // namespace GUI

#endif