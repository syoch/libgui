#include <GUI/Manager.hpp>
#include <GUI/DrawWrapper.hpp>
namespace GUI
{
    void Manager::render()
    {
        render::init();
        Container::_draw();
        render::exit();
    }
} // namespace GUI