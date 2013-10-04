#include <gtest/gtest.h>
#include <memory>
#include "FizzBuzz.hpp"

using namespace std;

class FizzBuzzTest : public ::testing::Test 
{
protected:

  FizzBuzzTest() {}

  virtual void SetUp() {}
  virtual void TearDown() {}
};

TEST_F(FizzBuzzTest, IsMultipleOf3) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_TRUE(fizbuz->IsMultipleOf3(3*2));
}

TEST_F(FizzBuzzTest, IsMultipleOf5) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_TRUE(fizbuz->IsMultipleOf5(5*2));
}

TEST_F(FizzBuzzTest, IsMultipleOf15) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_TRUE(fizbuz->IsMultipleOf15(15*2));
}


TEST_F(FizzBuzzTest, GetString_Fizz) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_EQ("Fizz", fizbuz->GetString(3*2));
}

TEST_F(FizzBuzzTest, GetString_Buzz) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_EQ("Buzz", fizbuz->GetString(5*2));
}

TEST_F(FizzBuzzTest, GetString_FizzBuzz) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_EQ("FizzBuzz", fizbuz->GetString(15*2));
}

TEST_F(FizzBuzzTest, GetString_Number) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_EQ("1", fizbuz->GetString(1));
}

TEST_F(FizzBuzzTest, GetString_ZERO) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_EQ("ZERO", fizbuz->GetString(0));
}

TEST_F(FizzBuzzTest, OutputString_OK) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_TRUE(fizbuz->OutputString(0, 100));
}

TEST_F(FizzBuzzTest, OutputString_NG) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_FALSE(fizbuz->OutputString(100, 0));
}

TEST_F(FizzBuzzTest, OutputString_SameNumber) 
{
	auto_ptr<FizzBuzz> fizbuz(new FizzBuzz());
	EXPECT_TRUE(fizbuz->OutputString(15, 15));
}
