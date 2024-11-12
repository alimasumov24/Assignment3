#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
private:
    int stealthLevel;

public:
    Decepticon(const std::string& name, int powerLevel, const Engine& engine, int stealthLevel);
    std::string transform() override;
    int getStealthLevel() const;
    void setStealthLevel(int stealthLevel);
};

#endif