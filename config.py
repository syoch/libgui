#! /usr/bin/python3

# Type Config
str_t = "std::wstring"
color_t = "uint32_t"
input_t = "uint32_t"
vec_t = "std::vector"
# includes
requiredHeaders = [
    "<vector>"
]


def writeConfig():
    fp = open("include/config.h", "w")
    fp.writelines([
        f"#pragma once",
        f"#ifndef LIBGUI_CONFIG",
        f"#define LIBGUI_CONFIG",
        f"",
        *[f"#include {a}" for a in requiredHeaders],
        f"",
        f"namespace GUI",
        f"{{",
        f"    using Str = {str_t};",
        f"    using Color = {color_t};",
        f"    using InputData = {input_t};",
        f"    using Vector = {vec_t};",
        f"}} // namespace GUI",
        f"",
        f"#endif"
    ])
