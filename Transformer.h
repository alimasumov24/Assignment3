#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Weapon; // Forward declaration for association

class Transformer {
public:
    Transformer(const std::string &name, int power, int speed, int armor);
    virtual ~Transformer();

    std::string getName() const;
    void setName(const std::string &name);

    int getPower() const;
    void setPower(int power);

    int getSpeed() const;
    void setSpeed(int speed);

    int getArmor() const;
    void setArmor(int armor);

    Weapon* getWeapon() const;
    void setWeapon(Weapon *);

    virtual void transform() const;
    virtual void attack() const;

protected:
    std::string name_;
    int power_;
    int speed_;
    int armor_;

private:
    Weapon *weapon_; // Association
};

#endif // TRANSFORMER_H