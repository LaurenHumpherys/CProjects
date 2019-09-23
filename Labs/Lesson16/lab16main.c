/** lab16main.c
* ===========================================================
* Name: Lauren Humpherys, 9-20-19
* Section: M1A
* Project: Lab 16 - Programming Practice
* Purpose:
* ===========================================================
*/
#include "lab16functs.h"

int main()  {
//EXERCISE 1:
    double resVals[NUM_RES];
    double circVolt = 12;
    double vDrop[NUM_RES];
    double currentVal;

    captureOhms(resVals);
    calculateCurrent(circVolt, resVals, &currentVal);
    voltageDrop(vDrop, resVals, currentVal);
    printDrop(resVals, currentVal, vDrop);

//EXERCISE 2:
    int iceCream;
    printf("Survey response scale: 10 - Outstanding, 8-9 - Excellent, 6-7 - Good, 5 - Average, \n"
           "3-4 - Below Average, 1-2 - Awful, 0 - Horrible.\n"
           "Enter an integer value from 0-10 corresponding to your opinion of Cookies 'n Cream ice cream:\n");
    scanf("%d", &iceCream);
    switch (iceCream) {
        case 0:
            printf("Horrible\n");
            break;
        case 1:
        case 2:
            printf("Awful\n");
            break;
        case 3:
        case 4:
            printf("Below Average\n");
            break;
        case 5:
            printf("Average\n");
            break;
        case 6:
        case 7:
            printf("Good\n");
        case 8:
        case 9:
            printf("Excellent\n");
            break;
        case 10:
            printf("Outstanding\n");
            break;
        default:
            printf("You did not enter a value between 0 and 10.\n");
    }

//EXERCISE 3:
    char operation;
    int num1, num2, num3;

    printf("Enter operation:");
    scanf("%s", &operation);
    printf("\nEnter 2 operands:");
    scanf("%d %d", &num1, &num2);

    num3 = performOperation(operation, num1, num2);

    printf("%d", num3);

//EXERCISE 4:
    int num = 5;
    int array[] = {25, 4, 5, 10, 7};
    int min;
    int max;

    getMinMax(array, num, &min, &max);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);


    return 0;
}

