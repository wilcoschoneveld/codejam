#include <iostream>
#include <fstream>
#include "Code.hpp"

int main(int argc, char *argv[]) {
    std::ifstream input(argv[1]);

    if (argc > 2) {
        std::ofstream output(argv[2]);

        Code::solve(input, output);
    } else {
        Code::solve(input, std::cout);
    }
}