#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
private:
    std::string faction;

public:
    Autobot(const std::string& name, int powerLevel, const Engine& engine, const std::string& faction);
    std::string transform() override;
    std::string getFaction() const;
    void setFaction(const std::string& faction);
};

#endif