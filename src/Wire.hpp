#pragma once

class Wire {
    int a, b;

public:
    Wire(int a, int b);

    bool intersects(const Wire& other);
};