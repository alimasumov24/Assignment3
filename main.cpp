#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Engine.h"
#include "Weapon.h"
int main() {
    Engine engine("V8", 400);
    Autobot bumblebee("Bumblebee", 75, engine, "Autobots");
    Decepticon megatron("Megatron", 90, engine, 80);
    

    std::cout << bumblebee.getName() << ": " << bumblebee.transform() << std::endl;
    std::cout << megatron.getName() << ": " << megatron.transform() << std::endl;

    return 0;
}