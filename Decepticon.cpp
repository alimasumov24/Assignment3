#include "Decepticon.h"

Decepticon::Decepticon(const std::string &name, int power, int speed, int armor, int cunning)
    : Transformer(name, power, speed, armor), cunning_(cunning) {}

int Decepticon::getCunning() const {
    return cunning_;
}

void Decepticon::setCunning(int cunning) {
    cunning_ = cunning;
}

void Decepticon::transform() const {
    // Decepticon-specific transformation
}

void Decepticon::deceive() const {
    // Deception logic
}