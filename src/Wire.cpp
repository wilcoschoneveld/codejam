#include "Wire.hpp"

Wire::Wire(int a, int b): a(a), b(b) {
    // empty
}

bool Wire::intersects(const Wire &other) const {
    return (a - other.a) * (b - other.b) < 0;
}