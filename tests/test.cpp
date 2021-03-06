#include <gui.hpp>
#include <engines/debug.hpp>
using namespace GUI;
class Btn : public Widget
{
private:
    void draw()
    {
        draw_rect((Point){0, 0}, (Point){size.width / 2, size.height / 2});
    }

public:
    using Widget::Widget;
    void onTouch(int x, int y)
    {
        std::wcout << "touched btn" << std::endl;
    }
};
int main(int argc, char const *argv[])
{
    Root root;

    Label<std::string>(root, 0, 0, 100, 100, "hi");

    root._draw();

    return 0;
}
