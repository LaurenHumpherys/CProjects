/** lab19functs.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include "lab19functs.h"

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void replStr(char str[], char aChar, char bChar)    {
    for (int i = 0; i < strlen(str); i++)   {
        if(str[i] == aChar) {
            str[i] = bChar;
        }
    }
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void replMultiChar(char str[], char searchChars[], char rChar) {
    for (int i = 0; i < strlen(searchChars); i++) {
        for (int j = 0; j < strlen(str); j++) {
            if (str[j] == searchChars[i]) {
                str[j] = rChar;
            }
        }
    }
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int findLocations(char str[], int locations[], char searchChar) {
    int count = 0;
    for (int k = 0; k < strlen(str); k++)   {
        if(str[k] == searchChar)    {
            locations[count] = k;
            count = count + 1;
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
int countSeqStr(char str[], char searchStr[]) {
    int count = 0;
    int stringLen = strlen(str);
    int searchStrLen = strlen(searchStr);
    int matches;

    for (int i = 0; i < stringLen - searchStrLen; i++) {
        matches = 1;
        for (int j = 0; j < searchStrLen; j++) {
            if (str[i + j] != searchStr[j]) {
                matches = 0;
                break;
            }
        }

    if (matches == 1) {
        count = count + 1;
    }
}

    return count+1;
}
