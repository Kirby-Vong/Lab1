#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, Helloworld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, ThreeWords) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "How"; test_val[2] = "are"; test_val[3] = "you";
    EXPECT_EQ("How are you", echo(4,test_val));
}

TEST(EchoTest, Numbers) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "123456";
    EXPECT_EQ("123456", echo(2,test_val));
}

TEST(EchoTest, SingleInput) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "k";
    EXPECT_EQ("k", echo(2,test_val));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

