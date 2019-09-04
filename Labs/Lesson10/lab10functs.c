/** lab10functs.c
* ===========================================================
* Name: Lauren Humpherys, 9-4-19
* Section: M1A
* Project: Lab 10 - Switch Statements, Conditionals, and String Operations
* Purpose:
* ===========================================================
*/

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
#include "lab10functs.h"

bool isFirstHalfAlpha(int character) {
    bool answer = (character >= 'a' && character <= 'm') || (character >= 'A' && character <= 'M') ? true : false;
    return answer;
}

int typeOfChar(char input)  {

    switch (input)  {
        case ('a'):
        case ('e'):
        case ('i'):
        case ('o'):
        case ('y'):
        case ('A'):
        case ('E'):
        case ('I'):
        case('O'):
        case('U'):
        case ('Y'):
            return 0;
            break;

        case ('b'):
        case ('c'):
        case ('d'):
        case ('f'):
        case ('g'):
        case ('h'):
        case ('j'):
        case ('k'):
        case ('l'):
        case ('m'):
        case ('n'):
        case ('p'):
        case ('q'):
        case ('r'):
        case ('s'):
        case ('t'):
        case ('v'):
        case ('w'):
        case ('x'):
        case ('z'):
        case ('B'):
        case ('C'):
        case ('D'):
        case ('F'):
        case ('G'):
        case ('H'):
        case ('J'):
        case ('K'):
        case ('L'):
        case ('M'):
        case ('N'):
        case ('P'):
        case ('Q'):
        case ('R'):
        case ('S'):
        case ('T'):
        case ('V'):
        case ('W'):
        case ('X'):
        case ('Z'):
            return 1;
            break;

        default:
            return -1;
            break;
    }
}

bool isMagicChar(char magic)    {
    bool isMagicOrNot = (magic == '@') ? true : false;
    return isMagicOrNot;
}



