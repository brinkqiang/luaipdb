
// Copyright (c) 2018 brinkqiang (brink.qiang@gmail.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include "luaipdb.h"

#include "dmstrtk.hpp"

std::string replace(const std::string& data, const std::string& from, const std::string& to)
{
    strtk::ext_string s(data);
    s.replace(from, to);
    return s;
}

std::string trim(const std::string& data, const std::string& delimiter)
{
    if (delimiter.empty())
    {
        return data;
    }
    strtk::ext_string s(data);
    s.replace(delimiter, "");
    return s;
}

std::vector<std::string> split(const std::string& data, const std::string& delimiter)
{
    std::vector<std::string> v;
    strtk::parse(data, delimiter, v);
    return v;
}

std::string join(const std::vector<std::string>& v, const std::string& delimiter)
{
    return strtk::join(delimiter, v);
}
