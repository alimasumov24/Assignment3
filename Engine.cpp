#include "Engine.h"

Engine::Engine(const std::string& type, int horsepower) : type(type), horsepower(horsepower) {}

std::string Engine::getType() const {
    return type;
}

int Engine::getHorsepower() const {
    return horsepower;
}