//add include statements
#include "repetition.h"

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