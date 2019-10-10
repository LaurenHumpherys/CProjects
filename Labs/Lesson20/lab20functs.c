/** lab20functs.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include "lab20functs.h"

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
double fToC(double degF){
    return (5.0 / 9.0)*(degF - 32);
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
double cToK(double degC){
    return degC + 273.15;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void printTable(double degFlow, double degFhigh, double degFstep) {
    fprintf(stdout, "\n\n|-----------------------------|\n");
    fprintf(stdout, "|                             |\n");
    fprintf(stdout, "|   Temperature Conversions   |\n");
    fprintf(stdout, "|                             |\n");
    fprintf(stdout, "|-----------------------------|\n");
    fprintf(stdout, "|Farenheit| Celsius | Kelvin  |\n");
    fprintf(stdout, "|-----------------------------|\n");

    for (double i = degFlow; i <= degFhigh; i += degFstep) {
        fprintf(stdout, "|%9.2lf|%9.2lf|%9.2lf|\n", i, fToC(i), cToK(fToC(i)));
    }
    fprintf(stdout, "|-----------------------------|\n");
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
double getInput(double * min, double * max, double * stepSize) {
    int minimum = 0;
    int maximum = 0;
    int validStepSize = 0;
    while (minimum == 0) {
        fprintf(stdout, "Minimum Farenheit temperature:  ");
        fscanf(stdin, "%lf", min);
        if (*min < -459 || *min > 10705) {
            fprintf(stdout, "Your input is outside of the range %.2lf to %.2lf.\n", -459.67, 10706.0);
            fprintf(stdout, "Please re-enter.\n");
        } else {
            minimum = 1;
        }
    }

    while (maximum == 0) {
        fprintf(stdout, "Maximum Farenheit temperature: ");
        fscanf(stdin, "%lf", max);
        if (*max <= *min || *max > 10705) {
            fprintf(stdout, "Your input is outside of the range %.2lf to %.2lf.\n", *min, 10706.0);
            fprintf(stdout, "Please re-enter.\n");
        } else {
            maximum = 1;
        }
    }

    while (validStepSize == 0) {
        fprintf(stdout, "What step size: ");
        fscanf(stdin, "%lf", stepSize);
        if (*stepSize < 1 || *stepSize > (*max - *min) / 2.0) {
            fprintf(stdout, "Your input is outside of the range %.2lf to %.2lf.\n", 0.0, (*max - *min) / 2.0);
            fprintf(stdout, "Please re-enter.\n");
        } else {
            validStepSize = 1;
        }
    }
    return 0;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
bool again(){
    char answer;
    printf("Would you like to do this again? ");
    fscanf(stdin, " %c", &answer);
    if (answer == 'y' || answer == 'Y') {
        return true;
    }
    return false;
}

