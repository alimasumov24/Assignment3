#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Engine.h"
#include "Weapon.h"

class Transformer {
private:
    std::string name;
    int powerLevel;
    bool isTransforming;
    Engine engine; // Композиция
    Weapon* weapon; // Ассоциация

public:
    Transformer(const std::string& name, int powerLevel, const Engine& engine);
    virtual ~Transformer();

    std::string getName() const;
    void setName(const std::string& name);
    int getPowerLevel() const;
    void setPowerLevel(int powerLevel);
    bool getIsTransforming() const;
    void setIsTransforming(bool isTransforming);

    virtual std::string transform() = 0; // Чисто виртуальный метод
};

#endif