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
	int selection, factorial, gcd, number, num1, num2, yn;
	bool process_ran = false;

	while (process_ran == false){
		
		process_ran = false;
		selection = get_menu_selection();

		switch (selection) {
			
			case 1:
				
				cout << "Please enter integer to recieve factorial: ";
				cin >> number;
				factorial = get_factorial(number);
				cout << endl << "The factorial of " << number << "is" << factorial << endl;
				process_ran = true;
				
				break;
			
			case 2:

				cout << "Please enter integer 1: ";
				cin >> num1;
				cout << "Please enter integer 2: ";
				cin >> num2;
				gcd = get_greatest_common_divisor(num1, num2);
				cout << endl << "The greatest common divisor of " << num1 << " and " << num2 << "is" << gcd << endl;
				process_ran = true;

				break;
			
			case 3:

				yn = get_yes_no_exit();

				if (yn == 1){
					exit(0);
				}

				break;
		}
		break;
	}
	
	
	return 0;
}
