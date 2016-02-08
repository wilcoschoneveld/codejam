#include "Code.hpp"

#include <cmath>

Code::Code(const std::string &code): code(code) {
    /* empty */
}

long long Code::getLowestNum() const {
    std::string chars;
    long long num = 0;

    for (char c : code)
        if (chars.find(c) == std::string::npos)
            chars += c;

    return std::pow(chars.size(), code.size());
}
