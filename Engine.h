#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
private:
    std::string type;
    int horsepower;

public:
    Engine(const std::string& type, int horsepower);
    std::string getType() const;
    int getHorsepower() const;
};

#endif