#include "FizzBuzz.hpp"

string FizzBuzz::GetString(int value)
{
	if(value == 0)
		return "ZERO";

	if(IsMultipleOf15(value))
	{
		return "FizzBuzz";
	}
	else if(IsMultipleOf3(value))
	{
		return "Fizz";
	}
	else if(IsMultipleOf5(value))
	{
		return "Buzz";
	}
	else
	{
		ostringstream stream;
		stream << value;
		string strValue = stream.str();
		return strValue;
	}	
}

bool FizzBuzz::IsMultipleOf3(int value)
{
	if(value % 3 == 0)
		return true;
	else
		return false;
}

bool FizzBuzz::IsMultipleOf5(int value)
{
	if(value % 5 == 0)
		return true;
	else
		return false;
}

bool FizzBuzz::IsMultipleOf15(int value)
{
	if(value % 15 == 0)
		return true;
	else
		return false;
}