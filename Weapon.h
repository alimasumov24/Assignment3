#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
public:
    Weapon(const std::string &type);
    ~Weapon();

    std::string getType() const;
    void setType(const std::string &type);

private:
    std::string type_;
};

#endif // WEAPON_H
