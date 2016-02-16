#pragma once

#include <iostream>
#include <string>
#include <vector>

class Audience {
    std::vector<int> people;

public:
    Audience(const std::string &audience);

    int friendsRequired() const;

    static void solve(std::istream &input, std::ostream &output);
};