/** lab15.h
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/

#ifndef LESSON14_LAB14_H
#define LESSON14_LAB14_H

#include <stdio.h>
#include "lab15fbFuncts.h"

int findMaxIndex(int footballData[MAXPLAYERS][DATACOLS], int colToUse, int arraySize);
int numPlayerOverX(int footballData[MAXPLAYERS][DATACOLS], int colToUse, int threshold, int arraySize);
int getMaxYardsPerCarryIndex(int threshold, int footballData[MAXPLAYERS][DATACOLS], int arraySize);
double getMaxYardsPerCarry(int threshold, int footballData[MAXPLAYERS][DATACOLS], int colToUse, int arraySize);



#endif //LESSON14_LAB14_H
