/** lab14functs.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include "lab14functs.h"
#include "lab14fbFuncts.h"


/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int findMaxIndex(int array[], int arraySize)  {
    int maxIndex = 0;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int numPlayerOverX(int* array, int threshold, int arraySize) {
    int count = 0;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] > threshold) {
            count++;
        }
    }
    return count;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int getMaxYardsPerCarryIndex(int threshold, int* yards, int* attempts) {
    int index = 0;
    double maximum = 0.0;
    double yardsPerCarry;
    for (int i = 0; i < MAXPLAYERS; i++) {
        if (attempts[i] > threshold) {
            yardsPerCarry = (double) yards[i] / attempts[i];
            if (yardsPerCarry > maximum) {
                maximum = yardsPerCarry;
                index = i;
            }
        }
    }
    return index;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int getMaxYardsPerCarry(int playerIndex, int threshold, int* yards, int* attempts)   {
    playerIndex = getMaxYardsPerCarryIndex(threshold, yards, attempts);
    double yardsPerCarry = (double)yards[playerIndex] / attempts[playerIndex];
    return yardsPerCarry;
}