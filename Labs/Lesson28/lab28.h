/** lab28.h
* ===========================================================
* Name: Lauren Humpherys, 28 Oct 2019
* Section: M1A
* Project: Programming Assessment 3 Practice
* Documentation: DOC STATEMENT
* ===========================================================  */

#ifndef MYEXE_LAB28_H
#define MYEXE_LAB28_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct EmployeeBD_struct{
    char firstName[15];
    char lastName[15];
    char birthMonth[15];
    int birthDate;
}EmployeeBD;

int getNumLines(char*);
int numVowels(char* charArray);
char* sortString(char* array);
int readFile(char filename[], EmployeeBD* empRecs, int numRecords);
int IDEmpBDMonth(EmployeeBD* empRecs, int numRecords, int month);



#endif //MYEXE_LAB28_H
