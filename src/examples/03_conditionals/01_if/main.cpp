#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	int min, max, num;

	cout << "Enter minimum number: ";
	cin >> min;

	cout << "Enter maximum number: ";
	cin >> max;

	cout << "Enter number: ";
	cin >> num;

	auto in_range = is_number_in_range(min, max, num);

	cout << in_range << "\n";

	return 0;
}
