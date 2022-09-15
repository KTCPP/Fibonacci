#include "pch.h"
#include "fibonacci.h"
#include "testhelpers.h"

TEST(Fibonacci, Normal) {
  meinmathe math;
  EXPECT_EQ(math.fibonacci(1), 1);
  EXPECT_EQ(math.fibonacci(2), 1);
  EXPECT_EQ(math.fibonacci(3), 2);
  EXPECT_EQ(math.fibonacci(4), 3);
  EXPECT_EQ(math.fibonacci(5), 5);
}

TEST(Fibonacci, throw) {
    meinmathe math;

    EXPECT_THROW(math.fibonacci(0),std::invalid_argument);
    EXPECT_THROW(math.fibonacci(-1),std::invalid_argument);

    //Dank Gtest brauchen wir die unteren Varianten nicht mehr
    try {
        math.fibonacci(0);
        assert(false); //should not have reached here
    }
    catch (std::invalid_argument ex) {
        assert(tostring(ex.what()).compare("false negative argument") == 0);
    }

    try {
        math.fibonacci(-1);
        assert(false); //should not have reached here
    }
    catch (std::invalid_argument ex) {
        assert(tostring(ex.what()).compare("false negative argument") == 0);
    }
}