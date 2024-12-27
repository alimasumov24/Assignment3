#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon(const std::string &name, int power, int speed, int armor, int cunning);

    int getCunning() const;
    void setCunning(int cunning);

    void transform() const override;
    void deceive() const;

private:
    int cunning_;
};

#endif // DECEPTICON_H