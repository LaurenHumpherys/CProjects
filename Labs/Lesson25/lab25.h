/** lab25.h
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/

#ifndef LESSON25_LAB25_H
#define LESSON25_LAB25_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Struct of variable type Point
typedef struct Point_struct {
    int x;
    int y;
} Point;

// Struct of variable type USAFBaseData
typedef struct USAFBase_struct  {
    char baseName[50];
    int bldgsOwned;
    int structsOwned;
    char city[50];
    char state[30];
} USAFBaseData;


/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void getPoints(Point* x, Point* y);


/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
double getDistance(Point point1, Point point2);

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int getNumLines(char filename[]);

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void readFile(char filename[], USAFBaseData** baseStruct, int lines);

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void printData(USAFBaseData** bases, int numBases);


#endif //LESSON25_LAB25_H
