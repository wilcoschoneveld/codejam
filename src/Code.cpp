#include "Code.hpp"

#include <algorithm>

Code::Code(const std::string &code): code(code) {
    /* empty */
}

long long Code::getLowestNum() const {
    std::string chars;
    long long num = 0;

    for (char c : code)
        if (chars.find(c) == std::string::npos)
            chars += c;

    if (chars.size() < 2)
        chars += '#';

    auto base = chars.size();

    std::swap(chars[0], chars[1]);

    for (char c : code) {
        num *= base;

        num += chars.find(c);
    }

    return num;
}

void Code::solve(std::istream &input, std::ostream &output) {
    int T;
    std::string line;

    input >> T;

    for (int t = 0; t < T; ++t) {
        input >> line;

        Code code(line);

        output << "Case #" << t + 1 << ": " << code.getLowestNum() << std::endl;
    }
}
