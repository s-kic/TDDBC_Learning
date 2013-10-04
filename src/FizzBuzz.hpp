#include <stdio.h>
#include <iostream>
#include <sstream>
#include <memory>
#include <string>

using namespace std;

class FizzBuzz
{
public:
	FizzBuzz(){}

	string GetString(int value);

	bool IsMultipleOf3(int value);
	bool IsMultipleOf5(int value);
	bool IsMultipleOf15(int value);
};
