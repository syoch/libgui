#include <WidgetBase.hpp>
#include <ContainerBase.hpp>

GUI::WidgetBase::WidgetBase(GUI::ContainerBase &_super, int x, int y, int w, int h)
    : Base(x, y, w, h), super(_super)
{
    _super.childrens.emplace_back(*this);
}