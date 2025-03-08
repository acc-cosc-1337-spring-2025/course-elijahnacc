#include <iostream>
#include <string>
#include "func.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
	int selection;
	string input_dna, complement;
	double gc_content;
	
	do {
		cout << "Menu\n" << "1) Get GC Content\n" << "2) Get Reverse DNA Complement\n" << "3) Exit\n";
		cout << "Please enter menu selection: ";
		cin >> selection;

		switch (selection){

			case 1:
				cout << "Please enter DNA strand: ";
				cin >> input_dna;
				gc_content = get_gc_content(input_dna);
				cout << "\nThe GC content of string " << input_dna << " is " << gc_content << "\n";
				break;
			case 2:
				cout << "Please enter DNA strand: ";
				cin >> input_dna;
				complement = get_reverse_complement(input_dna);
				cout << "\nThe reverse complement of strand " << input_dna << " is " << complement << "\n";
				break;
			case 3:
				break;
			default:
				cout << "Invalid selection\n";
				break;
		}

	} while (selection != 3);

	return 0;
}
