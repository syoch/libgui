#include <gui.hpp>
#include <engines/debug.hpp>
using namespace GUI;
int main(int argc, char const *argv[])
{
    Root root;

    Widget(root, 0, 0, 100, 100);

    root._draw();
    return 0;
}
