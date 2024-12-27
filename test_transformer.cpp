#include <gtest/gtest.h>
#include "Autobot.h"
#include "Decepticon.h"

TEST(TransformerTest, AutobotInitialization) {
    Autobot optimus("Optimus Prime", 100, 90, 80, 95);
    EXPECT_EQ(optimus.getName(), "Optimus Prime");
    EXPECT_EQ(optimus.getPower(), 100);
}

TEST(TransformerTest, DecepticonInitialization) {
    Decepticon megatron("Megatron", 95, 85, 90, 100);
    EXPECT_EQ(megatron.getName(), "Megatron");
    EXPECT_EQ(megatron.getCunning(), 100);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}