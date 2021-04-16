#include <iostream>
#include <GUI/gui.hpp>

using namespace GUI;
namespace GUI
{
    class Btn : public Widget
    {
    public:
        using Widget::Widget;
        void ontouch(TouchEvent &) override;
        void oninput(InputData &) override;
        void draw() override;
    };

    void Btn::ontouch(TouchEvent &data)
    {
        std::wcout << "touched " << data.pos.x << " " << data.pos.y << std::endl;
    }
    void Btn::oninput(InputData &)
    {
        std::wcout << "input" << std::endl;
    }
    void Btn::draw()
    {
        rect2((DrawInfo){{0, 0}, 0}, (DrawInfo){{10, 10}, 0});
    }
} // namespace GUI

int main(int, char const *[])
{
    TouchEvent a = (TouchEvent){(Pos){0, 0}, TouchEvent::START, 0, 0, 0};
    auto mgr = new Manager();
    auto scl1 = mgr->add<Scroll>(0, 0, 50, 50);
    scl1->add<Btn>(0, 0, 10, 10);

    a.pos = (Pos){0, 0};
    mgr->draw();
    mgr->ontouch(a);

    scl1->horizontal(10);
    scl1->vertical(10);

    a.pos = (Pos){10, 10};
    mgr->draw();
    mgr->ontouch(a);

    delete mgr;
    return 0;
}
