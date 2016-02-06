#include <iostream>
#include <fstream>
#include "Intranet.hpp"

int main(int argc, char *argv[]) {
    std::ifstream input(argv[1]);

    if (argc > 2) {
        std::ofstream output(argv[2]);

        Intranet::solve(input, output);
    } else {
        Intranet::solve(input, std::cout);
    }
}