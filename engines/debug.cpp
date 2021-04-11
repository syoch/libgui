// A debug engine for wiiu-libgui
#include <GUI/DrawWrapper.hpp>
#include <iostream>

namespace GUI
{
    namespace render
    {
        bool init()
        {
            std::wcout << "draw begin" << std::endl;
            return true;
        }
        bool exit()
        {
            std::wcout << "draw end" << std::endl;
            return true;
        }
        bool line(DrawInfo start, DrawInfo end)
        {

            std::wcout << "Draw line: "
                       << "(" << start.pos.x << ", " << start.pos.y << ")"
                       << "[" << start.color << ", "
                       << "] "
                       << "to"
                       << "(" << end.pos.x << ", " << end.pos.y << ")"
                       << "[" << end.color << ", "
                       << "] "
                       << std::endl;
            return true;
        }
        bool rect2(DrawInfo A, DrawInfo B)
        {
            std::wcout << "Draw rec2: "
                       << "(" << A.pos.x << ", " << A.pos.y << ")"
                       << "[" << A.color << ", "
                       << "] "
                       << ", "
                       << "(" << B.pos.x << ", " << B.pos.y << ")"
                       << "[" << B.color << ", "
                       << "] "
                       << std::endl;
            return true;
        }
        bool rect4(DrawInfo A, DrawInfo B, DrawInfo C, DrawInfo D)
        {
            std::wcout << "Draw rect: "
                       << "(" << A.pos.x << ", " << A.pos.y << ")"
                       << "[" << A.color << ", "
                       << "] "
                       << ", "
                       << "(" << B.pos.x << ", " << B.pos.y << ")"
                       << "[" << B.color << ", "
                       << "] "
                       << ", "
                       << "(" << C.pos.x << ", " << C.pos.y << ")"
                       << "[" << C.color << ", "
                       << "] "
                       << ", "
                       << "(" << D.pos.x << ", " << D.pos.y << ")"
                       << "[" << D.color << ", "
                       << "] "
                       << std::endl;
            return true;
        }

        bool text(DrawInfo info, Str str)
        {
            std::wcout << "Draw text: "
                       << info.pos.x << "," << info.pos.y << " "
                       << "[" << str << "] "
                       << "[" << info.color << "]" << std::endl;
            ;
            return true;
        }
        bool triangle(DrawInfo A, DrawInfo B, DrawInfo C)
        {
            std::wcout << "Draw tria: "
                       << "(" << A.pos.x << ", " << A.pos.y << ")"
                       << "[" << A.color << ", "
                       << "] "
                       << ", "
                       << "(" << B.pos.x << ", " << B.pos.y << ")"
                       << "[" << B.color << ", "
                       << "] "
                       << ", "
                       << "(" << C.pos.x << ", " << C.pos.y << ")"
                       << "[" << C.color << ", "
                       << "] "
                       << ", "
                       << std::endl;
            return true;
        }
        bool circle(DrawInfo A, DrawInfo B)
        {
            std::wcout << "Draw circ: "
                       << "(" << A.pos.x << ", " << A.pos.y << ")"
                       << "[" << A.color << ", "
                       << "] "
                       << ", "
                       << "(" << B.pos.x << ", " << B.pos.y << ")"
                       << "[" << B.color << ", "
                       << "] "
                       << std::endl;
            return true;
        }
    } // namespace render

}