#include <DisplayableWidget.hpp>
#include <Container.hpp>

gui::DisplayableWidget::DisplayableWidget(gui::Container &_super, int x, int y, int w, int h)
    : WidgetBase(x, y, w, h), super(_super)
{
    _super.childrens.emplace_back(*this);
}