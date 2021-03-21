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
    Manager mgr;
    Btn bt(50, 30, 10, 10);
    mgr.add(bt);

    Container container(10, 10, 50, 50);

    Btn bt2(10, 10, 50, 50);
    container.add(bt2);

    mgr.add(container);

    mgr.draw();
    delete mngr;
    return 0;
}
