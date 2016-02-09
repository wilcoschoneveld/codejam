#pragma once

#include <iostream>
#include <string>

class Code {
    std::string code;

public:
    Code(const std::string &code);

    long long getLowestNum() const;

    static void solve(std::istream &input, std::ostream &output);
};