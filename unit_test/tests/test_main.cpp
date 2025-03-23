#include "gtest/gtest.h"
#include "testy/func.h"
#include "testy/func_cust.h"

TEST(FuncTest, FuncOkTest) {
    EXPECT_EQ(func_ok(1, 1), 1);
    EXPECT_EQ(func_ok(0, 0), 0);
}


TEST(FuncTest, FuncOkNegativeTest) {
    EXPECT_EQ(func_ok(-1, -1), 0);  
    EXPECT_EQ(func_ok(-1, 1), 0);   
}

TEST(FuncTest, FuncOkLargeNumbersTest) {
    EXPECT_EQ(func_ok(1000, 1000), 0);  
    EXPECT_EQ(func_ok(500, 500), 0);    
}

TEST(FuncTest, FuncOkFailTest) {
    EXPECT_EQ(func_ok(1, 1), 0);  // Этот тест заведомо не пройдёт, так как func_ok(1, 1) возвращает 1, а мы ожидаем 0
}