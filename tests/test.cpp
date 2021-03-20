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

    auto scr1 = new Scroll(mngr, 50, 0, 50, 50);
    auto btn1 = new Btn(scr1, 0, 50, 50, 50);
    scr1->add(btn1);

    mngr->add(scr1);

    mngr->draw();
    delete mngr;
    return 0;
}
