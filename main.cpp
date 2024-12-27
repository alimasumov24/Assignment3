#include "Autobot.h"
#include "Decepticon.h"
#include "Weapon.h"
#include <iostream>

int main() {
    Autobot optimus("Optimus Prime", 100, 90, 80, 95);
    Decepticon megatron("Megatron", 95, 85, 90, 100);

    optimus.transform();
    optimus.defend();

    megatron.transform();
    megatron.deceive();

    Weapon blaster("Blaster");
    optimus.setPower(optimus.getPower() + 10);

    std::cout << "Optimus Power: " << optimus.getPower() << std::endl;
    std::cout << "Megatron Cunning: " << megatron.getCunning() << std::endl;

    return 0;
}