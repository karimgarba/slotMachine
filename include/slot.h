#pragma once
#include <array>

class Slot {
private:
    std::array<int, 3> slotValues;

public:
    std::array<int, 3> getSlotValues() const;
    void randomiseSlots();
    
};