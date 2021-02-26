#include <DisplayableWidget.hpp>
#include <ContainerBase.hpp>

gui::DisplayableWidget::DisplayableWidget(gui::ContainerBase &_super, int x, int y, int w, int h)
    : WidgetBase(x, y, w, h), super(_super)
{
    _super.childrens.emplace_back(*this);
}