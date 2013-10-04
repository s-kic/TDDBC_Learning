#include "FizzBuzz.hpp"

int main(int argc, char const *argv[])
{
	auto_ptr<FizzBuzz> ptr(new FizzBuzz());
	
	for (int i = -10; i <= 100; ++i)
	{
		cout << (ptr->GetString(i)) + ", ";
	}	
	cout <<  endl;
	
	return 0;
}