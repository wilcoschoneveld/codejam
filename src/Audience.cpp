#include <cmath>

#include "Audience.hpp"

Audience::Audience(const std::string &audience) {
    // For each character in the string, add the number to the vector
    for (char c : audience)
        people.push_back(c - '0'); // subtract '0' to offset char-int conversion
}

int Audience::friendsRequired() const {
    // Start with 0 clapping and required friends
    int clapping = 0;
    int friends = 0;

    // Loop through the audience
    for (int shyness = 0; shyness < people.size(); ++shyness) {
        // If there are no people in this shyness level, skip
        if (people[shyness] == 0)
            continue;

        // The amount of friends needed is the shyness level minus the amount of people clapping
        friends = std::max(shyness - clapping, friends);

        // Update the amount of people clapping
        clapping += people[shyness];
    }

    // Return number of friends required
    return friends;
}

void Audience::solve(std::istream &input, std::ostream &output) {
    int T, tmp;

    // Read number of test cases
    input >> T;

    for (int t = 0; t < T; ++t) {
        std::string people;

        // Discard the number and read the 'audience' string
        input >> tmp;
        input >> people;

        // Construct an audience object from the string
        Audience audience(people);

        // Write the output
        output << "Case #" << t + 1 << ": " << audience.friendsRequired() << std::endl;
    }
}
