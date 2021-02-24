#include <gui.hpp>
#include <engines/debug.hpp>
using namespace gui;
int main(int argc, char const *argv[])
{
    Container root;

    root.pushWidget(Widget(0, 0, 100, 100));

    root.draw();
    return 0;
}
