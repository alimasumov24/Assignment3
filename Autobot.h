#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot(const std::string &name, int power, int speed, int armor, int courage);
    
    int getCourage() const;
    void setCourage(int courage);

    void transform() const override;
    void defend() const;

private:
    int courage_;
};

#endif // AUTOBOT_H