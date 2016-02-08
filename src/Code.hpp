#pragma once

#include <string>

class Code {
    std::string code;

public:
    Code(const std::string &code);

    long long getLowestNum() const;
};


