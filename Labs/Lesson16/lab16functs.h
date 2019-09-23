/** lab16functs.h
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/

#ifndef LESSON16_LAB16FUNCTS_H
#define LESSON16_LAB16FUNCTS_H

#include <stdio.h>
#define NUM_RES 5

void captureOhms(double resVals[]);
void calculateCurrent(double circVolt, double resVals[], double* currentVal);
void voltageDrop(double vDrop[NUM_RES], double resVals[], double currentVal);
void printDrop(double resVals[], double currentVal, double vDrop[NUM_RES]);
int performOperation(char operation, int num1, int num2);
void getMinMax(int array[], int num, int* min, int* max);

#endif //LESSON16_LAB16FUNCTS_H
