/** lab13.h
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include "lab13.h"

int main()  {
//EXERCISE 1: PASS BY VALUE
    int classYear, favNum;
    printf("Please enter your class year:\n");
    scanf("%d", &classYear);
    printf("Please enter your favorite integer:\n");
    scanf("%d", &favNum);

    swapPassByValue(classYear, favNum);

    printf("aNum = %d, bNum = %d\n", classYear, favNum);


//EXERCISE 2: PASS BY REFERENCE
    swapPassByReference(&classYear, &favNum);
    printf("aNum = %d, bNum = %d\n", classYear, favNum);


//EXERCISE 3: ADDITION USING POINTERS
    int num1, num2;

    printf("Please enter 2 integers:\n");
    scanf("%d %d", &num1, &num2);

    int intSum = pointerSum(&num1, &num2);

    printf("The sum of input one and input two = %d\n", intSum);


//EXERCISE 4: FINDING THE FACTORIAL USING POINTERS
    int integer;
    long longNum;

    printf("Enter an integer:\n");
    scanf("%d", &integer);

    findFactorial(integer, &longNum);

    printf("The factorial of %d is %ld", integer, longNum);

    return 0;
}



/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void swapPassByValue(int classYear, int favNum)    {
    int valTemp;
    valTemp = classYear;
    classYear = favNum;
    favNum = valTemp;

}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void swapPassByReference(int* val1, int*val2)   {
    int tempVal;
    tempVal = *val1;
    *val1 = *val2;
    *val2 = tempVal;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int pointerSum(int* num1, int* num2)    {
    int intSum;
    intSum = *num1 + *num2;
    return intSum;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void findFactorial(int integer, long* longNum) {
    *longNum = 1;
    int i;
    for (i = integer; i >= 1; i--) {
        *longNum = *longNum * i;
    }
}
