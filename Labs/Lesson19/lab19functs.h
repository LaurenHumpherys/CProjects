/** lab19functs.h
* ===========================================================
* Name: Lauren Humpherys, 30 Sept 2019
* Section: M1A
* Project: Lesson 19 Lab
* Purpose:
* ===========================================================
*/
#ifndef LESSON19_LAB19FUNCTS_H
#define LESSON19_LAB19FUNCTS_H

#include <stdio.h>
#define MAX_STR_LEN 81
#include <string.h>

void replStr(char str[], char aChar, char bChar);
void replMultiChar(char str[], char searchChars[], char rChar);
int findLocations(char str[], int locations[], char searchChar);
int countSeqStr(char str[], char searchStr[]);

#endif //LESSON19_LAB19FUNCTS_H
