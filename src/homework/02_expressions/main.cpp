//write include statements
#include <iostream>
#include <string>
#include "hwexpressions.h"


//write namespace using statement for cout
using std::cin;
using std::cout;
using std::endl;

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	cout << "Enter meal amount: ";
	cin >> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);
	
	cout << "Enter tip rate: ";
	cin >> tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tip_amount + tax_amount;

	cout << endl;
	cout << "Meal Amount: " << meal_amount << endl;
	cout << "Sales Tax: " << tax_amount << endl;
	cout << "Tip Amount: " << tip_amount << endl;
	cout << "- - - - - - - - - - - -" << endl;
	cout << "Total: " << total << endl;

	return 0;
}
