//write include statements
#include "data_types.h"


//write namespace using statement for cout
using std::cout;
using std::cin;


int main()
{
	int num;
	cout<<"Enter number: ";
	cin>>num; //grabs value from keyboard input

	int result = multiply_numbers(num);

	cout<<"Result: "<<result<<"\n";

	int num1 = 4;

	result = multiply_numbers(num1);
	
	cout<<"Result "<<result<<"\n";

	return 0;
}
