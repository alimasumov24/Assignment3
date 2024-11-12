#include "Autobot.h"

Autobot::Autobot(const std::string& name, int powerLevel, const Engine& engine, const std::string& faction)
    : Transformer(name, powerLevel, engine), faction(faction) {}

std::string Autobot::transform() {
    return "Autobot transforming!";
}

std::string Autobot::getFaction() const {
    return faction;
}

void Autobot::setFaction(const std::string& faction) {
    this->faction = faction;
}