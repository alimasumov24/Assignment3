#include "Decepticon.h"

Decepticon::Decepticon(const std::string& name, int powerLevel, const Engine& engine, int stealthLevel)
    : Transformer(name, powerLevel, engine), stealthLevel(stealthLevel) {}

std::string Decepticon::transform() {
    return "Decepticon transforming!";
}

int Decepticon::getStealthLevel() const {
    return stealthLevel;
}

void Decepticon::setStealthLevel(int stealthLevel) {
    this->stealthLevel = stealthLevel;
}