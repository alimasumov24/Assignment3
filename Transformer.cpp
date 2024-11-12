#include "Transformer.h"

Transformer::Transformer(const std::string& name, int powerLevel, const Engine& engine)
    : name(name), powerLevel(powerLevel), isTransforming(false), engine(engine), weapon(nullptr) {}

Transformer::~Transformer() {}

std::string Transformer::getName() const {
    return name;
}

void Transformer::setName(const std::string& name) {
    this->name = name;
}

int Transformer::getPowerLevel() const {
    return powerLevel;
}

void Transformer::setPowerLevel(int powerLevel) {
    this->powerLevel = powerLevel;
}

bool Transformer::getIsTransforming() const {
    return isTransforming;
}

void Transformer::setIsTransforming(bool isTransforming) {
    this->isTransforming = isTransforming;
}
