#include "Weapon.h"

Weapon::Weapon(const std::string &type) : type_(type) {}

Weapon::~Weapon() {}

std::string Weapon::getType() const {
    return type_;
}

void Weapon::setType(const std::string &type) {
    type_ = type;
}