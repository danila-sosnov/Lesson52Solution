#include <iostream>
using namespace std;
#include "logic.h"

int sum_of_number_digits(int number)
{
	number = number < 0 ? -number : number;

	if (number < 10)
	{
		return number;
	}

	return sum_of_number_digits(number / 10) + number % 10;
}

int main()
{
	int number;
	cout << "Input your number: ";
	cin >> number;

	cout << sum_of_number_digits(number) << endl;





	return 0;
}