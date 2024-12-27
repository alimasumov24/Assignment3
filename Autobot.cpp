#include "Autobot.h"

Autobot::Autobot(const std::string &name, int power, int speed, int armor, int courage)
    : Transformer(name, power, speed, armor), courage_(courage) {}

int Autobot::getCourage() const {
    return courage_;
}

void Autobot::setCourage(int courage) {
    courage_ = courage;
}

void Autobot::transform() const {
    
}

void Autobot::defend() const {
    
}