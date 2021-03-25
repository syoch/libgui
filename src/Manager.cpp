#include <GUI/Manager.hpp>
#include <GUI/DrawWrapper.hpp>
namespace GUI
{
    void Manager::draw()
    {
        render::init();
        Container::_draw();
        render::exit();
    }
} // namespace GUI