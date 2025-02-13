#include <iostream>
#include "expressions.h"

using std::cin;
using std::cout;

int main()
{
    int num1, num2, num3;

    cout<<"Enter num1: ";
    cin>>num1;

    cout<<"Enter num2: ";
    cin>>num2;

    cout<<"Enter num3: ";
    cin>>num3;

    auto result = operator_precendence_1(num1, num2, num3);
    cout<<"Result op prec 1: "<<result<<"\n";

    auto result = operator_precendence_2(num1, num2, num3);
    cout<<"Result op prec 2: "<<result<<"\n";
    
    return 0;
}