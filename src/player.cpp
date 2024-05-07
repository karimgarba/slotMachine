#pragma once
#include "player.h"
#include "iostream"

int Player::getBet() const{
    return bet;
}
void Player::setBet(int amount) {
    while (true) {
        if (isMoneyZero()){
            std::cout << "You have no money." << std::endl;
            bet = 0;
        }
        else {
            money -= amount;
            bet = amount;
        }
    }
}

int Player::getBet() const {
    return money;
}

void Player::addMoney(int amount) {
    money += amount;
}

bool Player::isMoneyZero() {
    if (money = 0) {
        return true;
    }
    else {
        return false;
    }
}
