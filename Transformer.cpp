#include "Transformer.h"
#include "Weapon.h"

Transformer::Transformer(const std::string &name, int power, int speed, int armor)
    : name_(name), power_(power), speed_(speed), armor_(armor), weapon_(nullptr) {}

Transformer::~Transformer() {
    // Clean up if necessary
}

std::string Transformer::getName() const {
    return name_;
}

void Transformer::setName(const std::string &name) {
    name_ = name;
}

int Transformer::getPower() const {
    return power_;
}

void Transformer::setPower(int power) {
    power_ = power;
}

int Transformer::getSpeed() const {
    return speed_;
}

void Transformer::setSpeed(int speed) {
    speed_ = speed;
}

int Transformer::getArmor() const {
    return armor_;
}

void Transformer::setArmor(int armor) {
    armor_ = armor;
}

void Transformer::transform() const {
    // Transformation logic
}

void Transformer::attack() const {
    // Attack logic
}