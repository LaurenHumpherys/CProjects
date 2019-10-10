/** lab20main.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include <stdio.h>
#include "lab20functs.h"

int main() {
    double minF=0.0, maxF=0.0, stepF=0.0;
    do{
    //minF = getInput("Minimum Fahrenheit temperature: ", -459.67, 10706.0);
    //maxF = getInput("Maximum Fahrenheit temperature: ", minF, 10706.0);
    //stepF = getInput("What step size: ", 0, (maxF-minF)/2);

    getInput(&minF, &maxF, &stepF);
    printTable(minF, maxF, stepF);

    }while(again());
    return 0;
}

