#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

class SomeClass
{
    public:
    SomeClass() = default;
    virtual void SomeMethod() {
        std::cout << "SomeMethod" << std::endl;
    }
};

class MockedClass : public SomeClass
{
    public:
    MockedClass() = default;

    // here we use new syntax :
    // https://github.com/google/googletest/blob/main/docs/gmock_cook_book.md#creating-mock-classes
    MOCK_METHOD(void, SomeMethod, (), (override));
};

int add(int a, int b)
{
    return a + b;
}

TEST(TestSample, TestMock) {
    MockedClass mc;
    EXPECT_CALL(mc, SomeMethod()).Times(1);
    mc.SomeMethod();
}

TEST(TestSample, TestAddition)
{
    ASSERT_EQ(2, add(1,1));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}