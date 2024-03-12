#include <iostream>
#include <gtest/gtest.h>
#include <stack>
#include <cstdlib>

#include "FinishedConverter.h"

using namespace std;

class FinishedConverterTest : public testing::Test
{
protected:
    void SetUp() override
    {
    }

    FinishedConverter converter;
};

TEST_F(FinishedConverterTest, convertsSimpleValidInfix1)
{
    ASSERT_EQ(converter.convertToPostfix("1 + 3"), "1 3 +");
}

TEST_F(FinishedConverterTest, convertsSimpleValidInfix2)
{
    ASSERT_EQ(converter.convertToPostfix("1 + 2 * 3"), "1 2 3 * +");
}

TEST_F(FinishedConverterTest, convertwithParentheses1)
{
    ASSERT_EQ(converter.convertToPostfix("( 1 + 2 ) * 3"), "1 2 + 3 *");
}

TEST_F(FinishedConverterTest, convertwithParentheses2)
{
    ASSERT_EQ(converter.convertToPostfix("( 22 / 11 ) + ( 14 * 23 )"), "22 11 / 14 23 * +");
}

TEST_F(FinishedConverterTest, evaluatesSimplePostfix1)
{
    ASSERT_EQ(converter.evaluatePostfix("1 2 +"), 3);
}

TEST_F(FinishedConverterTest, evaluatesSimplePostfix2)
{
    ASSERT_EQ(converter.evaluatePostfix("1 2 + 3 *"), 9);
}

TEST_F(FinishedConverterTest, evaluatesTougherPostfix1)
{
    ASSERT_EQ(converter.evaluatePostfix("22 11 / 14 23 * +"), 324);
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}