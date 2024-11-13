#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>


enum class Direction {
    LEFT,
    RIGHT
};

class Transformer {
protected:
    std::string name;
    std::string type; 

public:
    Transformer(const std::string& name, const std::string& type)
        : name(name), type(type) {}

    virtual void transform() = 0; 

    virtual ~Transformer() = default; 

    
    virtual bool move();
    virtual bool turn(Direction dir);
    virtual bool jump();
    virtual bool fire();
    virtual bool ultimate();
};

#endif 