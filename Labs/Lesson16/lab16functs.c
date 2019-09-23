/** lab16functs.c
* ===========================================================
* Name: Lauren Humpherys, 9-20-19
* Section: M1A
* Project: Lab 16 - Programming Practice
* Purpose:
* ===========================================================
*/
#include "lab16functs.h"

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void captureOhms(double resVals[]) {
    int i = 0;
    for (i = 0; i < NUM_RES; i++) {
        printf("Enter resistor value:\n");
        scanf("%lf", &resVals[i]);
    }
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void calculateCurrent(double circVolt, double resVals[], double* currentVal)   {
    double R;
    for (int i = 0; i < NUM_RES; i++)    {
        R = R + resVals[i];
    }
    *currentVal = circVolt / R;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void voltageDrop(double vDrop[NUM_RES], double resVals[], double currentVal) {
    for (int i = 0; i < NUM_RES; i++) {
        vDrop[i] = currentVal * resVals[i];
    }
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void printDrop(double resVals[], double currentVal, double vDrop[NUM_RES])    {
    voltageDrop(vDrop, resVals, currentVal);
    for (int i = 0; i < NUM_RES; i++) {
        printf("%d) %.1lf V\n", i+1, vDrop[i]);
    }
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int performOperation(char operation, int num1, int num2) {
    int num3;
    switch (operation)  {
        case '+':
            num3 = num1 + num2;
            break;
        case '-':
            num3 = num1 - num2;
            break;
        case '*':
            num3 = num1 * num2;
            break;
        case '/':
            num3 = num1 / num2;
            break;
        default:
            printf("Error.\n");
    }
    return num3;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void getMinMax(int array[], int num, int* min, int* max) {
    int i;
    *min = 9999;
    *max = 0;
    for (i = 0; i < num; i++) {
        if (array[i] < *min) {
            *min = array[i];
        }
        if (array[i] > *max) {
            *max = array[i];
        }
    }
}

