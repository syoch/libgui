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
        std::wcout << "hi" << std::endl;
    }
} // namespace GUI

int main(int, char const *[])
{
    Manager mngr;
    mngr.add(new Btn(mngr, 0, 0, 100, 100));
    mngr.draw();
    return 0;
}
