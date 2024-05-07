#pragma once

class Game {
private:
    int reward;
    bool finished;
public:
    void round();
    bool isFnished();
    int getReward() const;
    int setReward();
    int calculateReward();

};