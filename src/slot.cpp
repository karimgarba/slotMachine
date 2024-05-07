#include "slot.h"
#include <random>

std::array<int, 3> Slot::getSlotValues() const {
    return slotValues;
}


// Define a helper function to generate a random number using a different random engine each time it's called
int generateRandomNumber() {
    // Use different random engines each time the function is called
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::default_random_engine dre(rd());

    // Use different distributions for each engine
    std::uniform_int_distribution<int> dist1(1, 5);  // Range: [1, 10]
    std::uniform_int_distribution<int> dist2(1, 5); // Range: [11, 20]
    std::uniform_int_distribution<int> dist3(1, 5); // Range: [21, 30]

    // Generate a random number using a different random engine and distribution each time
    int randomNumber;
    if (rd() % 2 == 0) {
        randomNumber = dist1(gen);
    } else if (rd() % 3 == 0) {
        randomNumber = dist2(dre);
    } else {
        randomNumber = dist3(gen);
    }

    return randomNumber;
}

void Slot::randomiseSlots() {
    // Generate three random values using different random functions each time
    for (std::array<int, 3>::size_type i = 0; i < slotValues.size(); ++i) {
        slotValues[i] = generateRandomNumber();
    }
}




