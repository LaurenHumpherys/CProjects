/** lab20functs.h
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#ifndef LESSON20_LAB20FUNCTS_H
#define LESSON20_LAB20FUNCTS_H
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double fToC(double degF);
double cToK(double degC);
void printTable(double degFlow, double degFhigh, double degFstep);
double getInput(double * min, double * max, double * stepSize);
bool again();
//void printLine(char what, int howMany);


#endif //LESSON20_LAB20FUNCTS_H
