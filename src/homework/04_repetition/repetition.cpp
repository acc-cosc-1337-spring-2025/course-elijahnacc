//add include statements
#include <iostream>
#include <string>
#include "repetition.h"

using std::cin;
using std::cout;
using std::endl;

//add function(s) code here
int get_factorial(int num){
    
    int factorial = 1;

    //multiplies accumulating product factorial by current num value then lowers num by 1
    while (num > 1){
        factorial *= num;
        num--;
    }
    
    return factorial;
}

int get_greatest_common_divisor(int num1, int num2){
    
    int swap;

    while (!(num1 == num2)){
        if (num1 < num2){
            swap = num1;
            num1 = num2;
            num2 = swap;
        }
        if (num1 > num2){
            num1 -= num2;
        }
    }
    
    return num1;
}

int get_menu_selection(){
    
    int selection = 0;
    
    while (!(selection == 1 || selection == 2 || selection == 3)){
        display_menu();
        cout << "Please enter menu selection: ";
        cin >> selection;
    }

    return selection;
}

int get_yes_no_exit(){
    
    char input_yn;
    int output_yn, input_valid;
    
    while (!(input_valid == 0)){
        
        input_valid = 0;
        
        cout << "Are you sure you want to exit the program? (y/n): ";
        cin >> input_yn;
    
        switch (input_yn) {
            case 'y':
            case 'Y':
                output_yn = 1;
                input_valid = 1;
                break;
            case 'n':
            case 'N':
                output_yn = 0;
                input_valid = 1;
                break;
            default:
                break;
        }
    }

    return output_yn;
}

void display_menu(){
    cout << "Menu" << endl;
    cout << "1 - Get Factorial" << endl;
    cout << "2 - Get Greatest Common Divisor" << endl;
    cout << "3 - Exit Program" << endl;
}