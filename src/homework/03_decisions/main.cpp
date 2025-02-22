//write include statements
#include <iostream>
#include <string>
#include "decisions.h"

using std::cin;
using std::cout;
using std::endl;

int main() 
{
	int choice, grade;
	string letter_grade;

	cout << "Menu" << endl;
	cout << "1 - Letter grade using if" << endl;
	cout << "2 - Letter grade using switch" << endl;
	cout << "3 - Exit" << endl;
	
	cout << "Enter menu selection: ";
	cin >> choice;

	switch (choice) {
		case 3:
			exit(0);
		case 2:
			cout << "Enter grade value (0-100): ";
			cin >> grade;
			letter_grade = get_letter_grade_using_switch(grade);
			break;
		case 1:
			cout << "Enter grade value (0-100): ";
			cin >> grade;
			letter_grade = get_letter_grade_using_if(grade);
			break;
		default:
			cout << "Invalid selection, closing program...";
			exit(0);
	}

	if (letter_grade == "Out of range") {
		cout << "Grade value out of range" << endl;
	}
	else {
		cout << "The letter grade for value " << grade << " is " << letter_grade << endl;
	}

	return 0;
}