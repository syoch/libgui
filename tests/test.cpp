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
    }
} // namespace GUI

int main(int, char const *[])
{
    auto mgr = new Manager();
    mgr->add<Btn>(50, 30, 10, 10);

    auto con1 = mgr->add<Container>(10, 10, 50, 50);
    con1->add<Btn>(20, 20, 50, 50);

    auto con2 = con1->add<Container>(20, 20, 50, 50);
    con2->add<Btn>(20, 20, 50, 50);

    mgr->draw();

    delete mgr;
    return 0;
}
