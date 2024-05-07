#pragma once

class Player {
private:
    int bet;
    int money;
public:
    int getBet() const;
    void setBet(int amount);
    int getMoney() const;
    void addMoney(int amount);
    bool isMoneyZero();
};