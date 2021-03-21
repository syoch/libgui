#! /usr/bin/python3
import sys
defaultconfig = {
    "str_t":  "std::wstring",
    "color_t": "uint32_t",
    "input_t": "uint32_t",
    "widVec_t": "std::vector<Widget*>",
    # includes
    "requiredHeaders": [
        "<vector>",
        "<string>"
    ]
}


def writeConfig(cfg):
    str_t = cfg["str_t"]
    color_t = cfg["color_t"]
    input_t = cfg["input_t"]
    widVec_t = cfg["widVec_t"]
    fp = open("include/config.h", "w")
    fp.writelines([
        f"#pragma once\n",
        f"#ifndef LIBGUI_CONFIG\n",
        f"#define LIBGUI_CONFIG\n",
        f"\n",
        *[f"#include {a}\n" for a in cfg["requiredHeaders"]],
        f"\n",
        f"namespace GUI\n",
        f"{{\n",
        f"    class Widget;\n",
        f"    using Str = {str_t};\n",
        f"    using Color = {color_t};\n",
        f"    using InputData = {input_t};\n",
        f"    using WidVec = {widVec_t};\n",
        f"}} // namespace GUI\n",
        f"\n",
        f"#endif\n"
    ])
    fp.close()


if __name__ == "__main__":
    writeConfig(defaultconfig)
