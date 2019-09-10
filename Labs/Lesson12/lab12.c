/** lab12.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include "lab12.h"

int main() {
//EXERCISE 1: ARMSTRONG NUMBER
    int input, armstrong;
    printf("Enter integer value:\n");
    scanf("%d", &input);

    armstrong = isArmstrong(input);

    if (armstrong == 1) {
        printf("%d is an Armstrong number.\n", input);
    }
    else    {
        printf("%d is not an Armstrong number.\n", input);

    }

//EXERCISE 2: GREATEST COMMON DENOMINATOR
    int num1, num2, greatestCommmonDenominator;
    printf("Input 2 integers:\n");
    scanf("%d %d", &num1, &num2);

    greatestCommmonDenominator = findGCD(num1, num2);

    printf("GCD = %d\n", greatestCommmonDenominator);

//EXERCISE 3: PRINT A RANGE OF VALUES
    int lower, upper;

    printf("Input 2 integer values:\n");
    scanf("%d %d", &lower, &upper);

    printRange(lower, upper);


        return 0;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int isArmstrong(int input) {
    int remainder, sum = 0, final = input;

    while (input > 0) {
        remainder = input % 10;
        sum = sum + (remainder * remainder * remainder);
        input = input / 10;
    }
    return final == sum ? 1 : 0;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int findGCD(int num1, int num2) {
    int i, gcd;
    for(i = 1; i <= num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
    return gcd;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void printRange(int lower, int upper)   {
    int i;
    for (i = lower; i <= upper; i++) {
        printf("%d\n", i);
    }
}


