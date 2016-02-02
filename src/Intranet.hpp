#pragma once

#include <vector>
#include "Wire.hpp"

class Intranet {
    std::vector<Wire> wires;

public:
    void connect(int a, int b);

    int countIntersections() const;
};