/** lab15functs.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include "lab15functs.h"
#include "lab15fbFuncts.h"


/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int findMaxIndex(int footballData[MAXPLAYERS][DATACOLS], int colToUse, int arraySize)  {
    int maxIndex = 0;
    for (int i = 0; i < arraySize; i++) {
        if (footballData[i][colToUse] > footballData[maxIndex][colToUse]) {
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
int numPlayerOverX(int footballData[MAXPLAYERS][DATACOLS], int colToUse, int threshold, int arraySize) {
    int count = 0;
    for (int i = 0; i < arraySize; i++) {
        if (footballData[i][colToUse] > threshold) {
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
int getMaxYardsPerCarryIndex(int threshold, int footballData[MAXPLAYERS][DATACOLS], int arraySize) {
    int index;
    double maximum = 0.0;
    double yardsPerCarry;
    for (int i = 0; i < arraySize; i++) {
        if (footballData[i][0] > threshold) {
            yardsPerCarry = ((double) footballData[i][1]) / ((double) footballData[i][0]);
            if (yardsPerCarry >= maximum) {
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
double getMaxYardsPerCarry(int threshold, int footballData[MAXPLAYERS][DATACOLS], int index, int arraySize)   {
    index = getMaxYardsPerCarryIndex(threshold, footballData, arraySize);
    double yardsPerCarry = ((double)footballData[index][1]) / ((double)footballData[index][0]);
    return yardsPerCarry;
}



