#include "Intranet.hpp"

void Intranet::connect(int a, int b) {
    // Add a new wire to the intranet
    wires.push_back(Wire(a, b));
}

int Intranet::countIntersections() const {
    // Start with 0 intersections
    int count = 0;

    // Loop through all combinations of wires, count all intersections
    for (auto wireA = wires.begin(); wireA != wires.end(); ++wireA)
        for (auto wireB = wireA + 1; wireB != wires.end(); ++wireB)
            if (wireA->intersects(*wireB))
                count++;

    // Return count
    return count;
}

void Intranet::solve(std::istream &input, std::ostream &output) {
    int T, N, a, b, i;

    // Read number of test cases
    input >> T;

    for (int t = 0; t < T; ++t) {
        // Construct a new intranet
        Intranet net;

        // Read the number of connections
        input >> N;

        for (int n = 0; n < N; ++n) {
            // Read the connection points
            input >> a >> b;

            // Connect a wire
            net.connect(a, b);
        }

        // Count the number of intersections
        i = net.countIntersections();

        // Write the output
        output << "Case #" << t + 1 << ": " << i << std::endl;
    }
}