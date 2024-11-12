#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Engine.h"
#include "Weapon.h"

// Тестирование класса Engine
TEST(EngineTest, GetType) {
    Engine engine("V8", 500);
    EXPECT_EQ(engine.getType(), "V8");
}

TEST(EngineTest, GetHorsepower) {
    Engine engine("V8", 500);
    EXPECT_EQ(engine.getHorsepower(), 500);
}

// Тестирование класса Weapon
TEST(WeaponTest, GetName) {
    Weapon weapon("Blaster", 100);
    EXPECT_EQ(weapon.getName(), "Blaster");
}

TEST(WeaponTest, GetDamage) {
    Weapon weapon("Blaster", 100);
    EXPECT_EQ(weapon.getDamage(), 100);
}

// Тестирование базового класса Transformer
TEST(TransformerTest, GetName) {
    Engine engine("V8", 500);
    Transformer* transformer = new Autobot("Optimus Prime", 1000, engine, "Autobot");
    EXPECT_EQ(transformer->getName(), "Optimus Prime");
    delete transformer;
}

TEST(TransformerTest, SetName) {
    Engine engine("V8", 500);
    Transformer* transformer = new Autobot("Optimus Prime", 1000, engine, "Autobot");
    transformer->setName("Bumblebee");
    EXPECT_EQ(transformer->getName(), "Bumblebee");
    delete transformer;
}

TEST(TransformerTest, GetPowerLevel) {
    Engine engine("V8", 500);
    Transformer* transformer = new Autobot("Optimus Prime", 1000, engine, "Autobot");
    EXPECT_EQ(transformer->getPowerLevel(), 1000);
    delete transformer;
}

TEST(TransformerTest, SetPowerLevel) {
    Engine engine("V8", 500);
    Transformer* transformer = new Autobot("Optimus Prime", 1000, engine, "Autobot");
    transformer->setPowerLevel(1500);
    EXPECT_EQ(transformer->getPowerLevel(), 1500);
    delete transformer;
}

TEST(TransformerTest, GetIsTransforming) {
    Engine engine("V8", 500);
    Transformer* transformer = new Autobot("Optimus Prime", 1000, engine, "Autobot");
    EXPECT_EQ(transformer->getIsTransforming(), false);
    delete transformer;
}

TEST(TransformerTest, SetIsTransforming) {
    Engine engine("V8", 500);
    Transformer* transformer = new Autobot("Optimus Prime", 1000, engine, "Autobot");
    transformer->setIsTransforming(true);
    EXPECT_EQ(transformer->getIsTransforming(), true);
    delete transformer;
}

// Тестирование класса Autobot
TEST(AutobotTest, Transform) {
    Engine engine("V8", 500);
    Autobot autobot("Optimus Prime", 1000, engine, "Autobot");
    EXPECT_EQ(autobot.transform(), "Autobot transforming!");
}

TEST(AutobotTest, GetFaction) {
    Engine engine("V8", 500);
    Autobot autobot("Optimus Prime", 1000, engine, "Autobot");
    EXPECT_EQ(autobot.getFaction(), "Autobot");
}

TEST(AutobotTest, SetFaction) {
    Engine engine("V8", 500);
    Autobot autobot("Optimus Prime", 1000, engine, "Autobot");
    autobot.setFaction("Leader");
    EXPECT_EQ(autobot.getFaction(), "Leader");
}

// Тестирование класса Decepticon
TEST(DecepticonTest, Transform) {
    Engine engine("V8", 500);
    Decepticon decepticon("Megatron", 1000, engine, 5);
    EXPECT_EQ(decepticon.transform(), "Decepticon transforming!");
}

TEST(DecepticonTest, GetStealthLevel) {
    Engine engine("V8", 500);
    Decepticon decepticon("Megatron", 1000, engine, 5);
    EXPECT_EQ(decepticon.getStealthLevel(), 5);
}

TEST(DecepticonTest, SetStealthLevel) {
    Engine engine("V8", 500);
    Decepticon decepticon("Megatron", 1000, engine, 5);
    decepticon.setStealthLevel(10);
    EXPECT_EQ(decepticon.getStealthLevel(), 10);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}