#include <DisplayableWidget.hpp>
#include <ContainerBase.hpp>

GUI::DisplayableWidget::DisplayableWidget(GUI::ContainerBase &_super, int x, int y, int w, int h)
    : Base(x, y, w, h), super(_super)
{
    _super.childrens.emplace_back(*this);
}