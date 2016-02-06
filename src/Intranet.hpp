#pragma once

#include <vector>
#include <iostream>
#include "Wire.hpp"

class Intranet {
    std::vector<Wire> wires;

public:
    void connect(int a, int b);

    int countIntersections() const;

    static void solve(std::istream &input, std::ostream &output);
};