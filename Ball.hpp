#pragma once

#include <utility>

class Ball {
public:
    std::pair<int, int> getPosition() { return position_; }
    void setPosition(std::pair<int, int> newPosition) {
        position_.first = newPosition.first;
        position_.second = newPosition.second;
    }
private:
    std::pair<int, int> position_;
    const int radius;
    const int speed;
};