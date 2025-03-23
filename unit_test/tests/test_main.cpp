#include "gtest/gtest.h"
#include "testy/func.h"
#include "testy/func_cust.h"

TEST(FuncTest, FuncOkTest) {
    EXPECT_EQ(func_ok(1, 1), 1);
    EXPECT_EQ(func_ok(0, 0), 0);
}

TEST(CustomerCheckTest, CustomerCheckTest) {
    EXPECT_EQ(customer_check(5), 1);
    EXPECT_EQ(customer_check(10), 0);
}