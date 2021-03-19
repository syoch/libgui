#include <gui.hpp>
#include <engines/debug.hpp>
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
        render::circle((DrawInfo){{0, 0}, 0}, (DrawInfo){{0, 50}, 0});
        std::wcout << "hi" << std::endl;
    }
} // namespace GUI

int main(int, char const *[])
{
    auto mngr = new Manager();

    auto button1 = Btn(0, 0, 100, 100);
    mngr->add(button1);

    auto container1 = new Container(0, 100, 100, 100);
    auto button2 = new Btn(0, 0, 50, 50);

    container1->add(button2);

    mngr->add(container1);

    mngr->draw();
    return 0;
}
