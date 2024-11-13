#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "transformer.h"

class Maximal : public Transformer {
public:
    Maximal(const std::string& name)
        : Transformer(name, "Maximal") {}

    virtual ~Maximal() = default; 

    void transform() override; 
};

#endif // MAXIMAL_H