//write include statements
#include <iostream>
#include <string>
#include "repetition.h"

//write using statements
using std::cout;
using std::cin;
using std::endl;

int main() 
{
	cout << "Menu" << endl << "1 - Factorial" << endl << "2 - Greatest Common Divisor" << endl << "3 - Exit" << endl;

	int selection, num1, num2;
	char yn;

	do {
		while (true){
			cout << "Please enter menu selection: ";
			cin >> selection;
			if (selection == 1 or selection == 2 or selection == 3){
				break;
			}
		}
		
		if (selection == 1){
			cout << "Enter integer for factorial: ";
			cin >> num1;
			cout << "The factorial of " << num1 << " is " << get_factorial(num1) << endl;
		}
		else if (selection == 2){
			cout << "Enter 2 integers: " << endl;
			cin >> num1 >> num2;
			cout << "The greatest common divisor of " << num1 << " and " << num2 << " is " << get_greatest_common_divisor(num1, num2) << endl;
		}
		else if (selection == 3){
			while (true) {
				cout << endl << "Would you like to exit? (Y/N): ";
				cin >> yn;
				if (yn == 'Y' || yn == 'y' || yn == 'N' || yn == 'n') {
					break;
				}
			}
			if (yn == 'Y' || yn == 'y'){
				selection = 3;
			}
			else if (yn == 'N' || yn == 'n'){
				selection = 0;
			}
		}
	} while (selection != 3);

	return 0;
}
