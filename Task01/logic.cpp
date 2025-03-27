#include "logic.h"

string s = "";

long long int get_factorial(int number)
{
	s += "   ";
	cout << s << "Start function with number = " << number << endl;

	if (number < 0)
	{
		return -1;
	}

	if (number <= 1)
	{
		cout << s << "End function with number = " << number
			<< " and result = 1" << endl;
		s.resize(s.length() - 3);
		return 1;
	}

	int result = get_factorial(number - 1) * number;

	cout << s << "End function with number = " << number
		<< " and result = " << result << endl;

	s.resize(s.length() - 3);

	return result;
}