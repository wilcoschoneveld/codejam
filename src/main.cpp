#include <iostream>
#include <fstream>
#include "Audience.hpp"

int main(int argc, char *argv[]) {
    std::ifstream input(argv[1]);

    if (argc > 2) {
        std::ofstream output(argv[2]);

        Audience::solve(input, output);
    } else {
        Audience::solve(input, std::cout);
    }
}