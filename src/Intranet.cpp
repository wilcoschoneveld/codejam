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