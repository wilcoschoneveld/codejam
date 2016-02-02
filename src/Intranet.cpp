#include "Intranet.hpp"

void Intranet::connect(int a, int b) {
    wires.push_back(Wire(a, b));
}

int Intranet::countIntersections() const {
    auto n = wires.size();
    int c = 0;

    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (wires[i].intersects(wires[j]))
                c++;

    return c;
}
