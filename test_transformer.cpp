#include "gtest/gtest.h"
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Weapon.h"

// Тесты для базового класса Transformer
TEST(TransformerTest, GettersAndSetters) {
    Transformer transformer("Optimus", 100, 80, 120);

    EXPECT_EQ(transformer.getName(), "Optimus");
    EXPECT_EQ(transformer.getPower(), 100);
    EXPECT_EQ(transformer.getSpeed(), 80);
    EXPECT_EQ(transformer.getArmor(), 120);

    transformer.setName("Bumblebee");
    transformer.setPower(90);
    transformer.setSpeed(75);
    transformer.setArmor(110);

    EXPECT_EQ(transformer.getName(), "Bumblebee");
    EXPECT_EQ(transformer.getPower(), 90);
    EXPECT_EQ(transformer.getSpeed(), 75);
    EXPECT_EQ(transformer.getArmor(), 110);
}

// Тесты для наследника Autobot
TEST(AutobotTest, DerivedMethods) {
    Autobot autobot("Bumblebee", 90, 75, 110, 80);

    EXPECT_EQ(autobot.getName(), "Bumblebee");
    EXPECT_EQ(autobot.getCourage(), 80);

    autobot.setCourage(85);
    EXPECT_EQ(autobot.getCourage(), 85);

    // Проверка полиморфизма
    Transformer* transformer = &autobot;
    transformer->transform(); // Должен вызывать Autobot::transform
}

// Тесты для наследника Decepticon
TEST(DecepticonTest, DerivedMethods) {
    Decepticon decepticon("Megatron", 120, 70, 130, 95);

    EXPECT_EQ(decepticon.getName(), "Megatron");
    EXPECT_EQ(decepticon.getCunning(), 95);

    decepticon.setCunning(100);
    EXPECT_EQ(decepticon.getCunning(), 100);

    // Проверка полиморфизма
    Transformer* transformer = &decepticon;
    transformer->transform(); // Должен вызывать Decepticon::transform
}

// Тесты ассоциации с Weapon
TEST(TransformerTest, AssociationWithWeapon) {
    Transformer transformer("Optimus", 100, 80, 120);


    // Связываем Weapon с Transformer
    Weapon* weapon = new Weapon("Laser");
    transformer.setWeapon(weapon);

    EXPECT_NE(transformer.getWeapon(), nullptr);
    EXPECT_EQ(transformer.getWeapon()->getType(), "Laser");

    // Освобождаем память
    delete weapon;
}

// Тесты методов Weapon
TEST(WeaponTest, GettersAndSetters) {
    Weapon weapon("Blaster");

    EXPECT_EQ(weapon.getType(), "Blaster");

    weapon.setType("Cannon");
    EXPECT_EQ(weapon.getType(), "Cannon");
}