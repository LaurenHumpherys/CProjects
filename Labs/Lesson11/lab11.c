/** lab11.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include "lab11.h"

int main()  {
//EXERCISE 1: FACTORIAL
    int fact = 1;
    int input;

    printf("Enter an integer:\n");
    scanf("%d", &input);

    fact = numFactorial(input);

    printf("The factorial of %d is %d.\n", input, fact);

//EXERCISE 2: PRIME NUMBER
    int userInput;
    printf("Input an integer value:");
    scanf("%d", &userInput);

    int returnVal = isPrime(userInput);

    printf(returnVal == 0 ? "%d is a prime number.\n" : "%d is not a prime number.\n", userInput);


//EXERCISE 3: FLOYD'S TRIANGLE
    int rows;
    printf("Please enter the number of rows:\n");
    scanf("%d", &rows);

    floydsTriangle(rows);


    return 0;
}



/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int numFactorial(int input) {
    int calculatedVal, fact;
    fact = 1;
    for (calculatedVal = 1; calculatedVal <= input; calculatedVal++) {
        fact = fact * calculatedVal;
    }
    return fact;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int isPrime(int userInput) {
    int calc;
    for (calc = 2; calc < userInput / 2; calc++) {
        return userInput % calc != 0 ? 1 : 0;
    }
    return 0;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/

void floydsTriangle(int numRows)   {
    int rowCount, column;
    for (rowCount = 0; rowCount < numRows; rowCount++) {
        for (column = 0; column <= rowCount; column++) {
            if (((rowCount + column) % 2) == 0)
                printf("0");
            else
                printf("1");
            printf("\t");
        }
        printf("\n");
    }
}


