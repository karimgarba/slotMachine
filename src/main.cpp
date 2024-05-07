#include <iostream>
#include "slot.h"

int main() {
    // Create an instance of the Slot class
    Slot slotMachine;

    // Randomize the slots
    slotMachine.randomiseSlots();

    // Get the randomized slot values
    std::array<int, 3> slotValues = slotMachine.getSlotValues();

    // Display the randomized slot values
    std::cout << "Slot Values: ";
    for (int value : slotValues) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
