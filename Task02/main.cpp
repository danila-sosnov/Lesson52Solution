#include <iostream>
using namespace std;
#include "logic.h"

int count_of_number_digits(int number)
{
	number = number < 0 ? -number : number;

	if (number < 10)
	{
		return 1;
	}

	return count_of_number_digits(number / 10) + 1;
}

int main()
{
	int number;
	cout << "Input your number: ";
	cin >> number;

	cout << count_of_number_digits(number);





	return 0;
}