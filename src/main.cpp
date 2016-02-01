#include <iostream>
#include "Wire.hpp"


int main() {
    Wire one(1, 10), two(5, 5);

    std::cout << one.intersects(two) << std::endl;
}