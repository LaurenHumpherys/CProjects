/** lab10main.c
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

int main()  {
    char character, input, magic;
    bool answer, isMagicOrNot;
    int charType;

    printf("Enter a single character to pass to isFirstHalfAlpha():");
    scanf(" %c", &character);
    answer = isFirstHalfAlpha(character);

    if (answer == true) {
        printf("A %c is in the first half of the alphabet.\n", character);
    }
    else    {
        printf("A %c is NOT in the first half of the alphabet.\n", character);
    }

    printf("Enter a single character to pass to typeOfChar():");
    scanf(" %c", &input);

    charType = typeOfChar(input);

    if (charType == 0) {
        printf("A %c is a vowel.\n", input);
    }
    else if (charType == 1) {
        printf("A %c is a consonant.\n", input);
    }
    else {
        printf("A %c is neither a vowel nor a consonant.\n", input);
    }

    printf("Enter a single character to pass to isMagicChar():");
    scanf(" %c", &magic);

    isMagicOrNot = isMagicChar(magic);

    if (isMagicOrNot == true) {
        printf("A %c is the magic character @.\n", magic);
    }
    else {
        printf("A %c is NOT the magic character @.\n", magic);
    }

    return 0;

    }



