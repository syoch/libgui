#include <iostream>
#include <gui.hpp>

using namespace GUI;
namespace GUI
{
    class Btn : public Widget
    {
    public:
        using Widget::Widget;
        void ontouch(Pos &) override;
        void oninput(InputData &) override;
        void draw() override;
    };

    void Btn::ontouch(Pos &)
    {
        std::wcout << "touched btn" << std::endl;
    }
    void Btn::oninput(InputData &)
    {
        std::wcout << "input" << std::endl;
    }
    void Btn::draw()
    {
        circle((DrawInfo){{0, 0}, 0}, (DrawInfo){{0, 50}, 0});
        std::wcout << "Btn hi   " << pos.x << " " << pos.y << " " << size.w << " " << size.h << std::endl;
    }
} // namespace GUI

int main(int, char const *[])
{
    auto mgr = new Manager();
    auto bt1 = new Btn(50, 30, 10, 10);
    mgr->add(bt1);

    auto container = new Container(10, 10, 50, 50);
    auto bt2 = new Btn(20, 20, 50, 50);
    container->add(bt2);

    auto con2 = new Container(20, 20, 50, 50);
    auto bt3 = new Btn(20, 20, 50, 50);
    con2->add(bt3);
    container->add(con2);
    mgr->add(container);

    mgr->draw();

    delete mgr;
    return 0;
}
