/** lab28.c
* ===========================================================
* Name: Lauren Humpherys, 28 Oct 2019
* Section: M1A
* Project: Progamming Assessment 3 Practice
* Documentation: DOC STATEMENT
* ===========================================================  */
#include "lab28.h"


int main(void) {
    char filename[] = "Employee_Recs.txt";
    int numLines = getNumLines(filename);
    printf("%d", numLines);

//    PROBLEM 1 - STRING MANIPULATION
//          a.) Define a function called numVowels that takes in a character array and outputs
//          an integer.  The function itself finds the number of vowels within the provided character
//          array. The character array may contain spaces and punctuation.
     printf("%d\n",numVowels("This is a string."));

        //      b.) Define a function called sortString that expects an array of characters array and
    //      and returns a pointer to an array of characters.  The function sorts the characters
    //      in the string in alphabetic order, stores them in this order, and returns a pointer to
    //      this sorted array of characters.
    //      The character array may contain spaces and punctuation. When sorting, spaces and punctuation
    //      should be ignored and all alphabetic characters should be changed to lowercase for
    //      sorting and output.
    //      NOTE: In order to return a pointer to an array of characters that has scope outside a
    //          function call, the memory used to store the sorted array must by dynamically
    //          allocated.
     char *newString = sortString("ThIs Is A sTrIng.");
     printf("%s\n", newString);
     free(newString);

    // PROBLEM 2 - Manipulate Employee Data
    //      You are tasked to create a program that will pull employee records from a simple
    //      text file that contains name and birthdate.  The ultimate goal is to allow a user
    //      to input a month that will result in output to the screen displaying all of the
    //      employees with birthdays for the specified month.  This will assist the squadron
    //      commander with ensuring that all employee birthdays are recognized at the
    //      monthly staff meeting.

    //      a.) Define a structure type, named EmployeeBD, with appropriate members
    //      to store data from the Employee_Recs.txt file. Use the fields names:
    //      FirstName, lastName, birthMonth, and birthDate.


    //      b.) Use the getNumLines function provided to capture the number of records to be read from
    //      from the Employee_Recs.txt file, then dynamically allocate memory to store the employee data
    //      from the text file.
         int numRecords = getNumLines(filename);

    //      c.) Create a user-defined function called readFile, which requires the filename,
    //      memory passed by reference, and the number of records to be passed as parameters
    //      (in that order).  This function returns the integer value corresponding to the number
    //      of records successfully read.
            EmployeeBD* employeeData = malloc(sizeof(EmployeeBD) * numRecords);
            int numRead = readFile(filename, employeeData, numRecords);
            printf("%d", numRead);

    //      d.) Create a user-defined function called IDEmpBDMonth to print the employee records
    //      for all employees born in a specified month.  This function accepts three parameters
    //      being the stored records passed by reference, the number of records, and the specified
    //      month for record printing (in that order).  It returns the number of records with the
    //      specified month.
    //      NOTE:  In main, ask the user to provide an integer from 1 - 12 that corresponds with the
    //          birth month they would like to query.
    //      Format the output to the screen as follows:
    //          Example if the user enters 10:
    //              Requested Birthdays are:
    //              Lastname	Firstname	Birthday
    //              *********************************************
    //              Smith		Brian		October 13

    return 0;
}

int getNumLines(char filename[])
{
    char c;
    int count = 0;
    // Open the file
    FILE* fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL)
    {
        printf("Could not open file %s", filename);
        return 0;
    }

    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;

    // Close the file
    fclose(fp);
    //printf("The file %s has %d lines\n ", filename, count);

    return count;
}

int numVowels(char charArray[]) {
    int numVowels = 0;
    for (int i = 0; i < strlen(charArray); i++) {
        tolower(charArray[i]);
        if((charArray[i] == 'a') || (charArray[i] == 'e') || (charArray[i] == 'i') || (charArray[i] == 'o') || (charArray[i] == 'u'))   {
            numVowels++;
        }
    }
    return numVowels;
}

char* sortString(char array[])  {
    char *newArray = malloc(sizeof(char) * strlen(array));
    char tempString[strlen(array) + 1];
    for(int i = 0; i < strlen(array); i++){
        tempString[i] = tolower(array[i]);
    }

    int count = 0;
    for(int i = 'a'; i <= 'z'; i++) {
        for(int j = 0; j < strlen(tempString); j++) {
            if(tempString[j] == i) {
                newArray[count] = i;
                count++;
            }
        }
    }
    return newArray;

}

int readFile(char filename[], EmployeeBD* empRecs, int numRecords)    {
    empRecs = malloc(sizeof(EmployeeBD) * numRecords);
    // Open the file
    FILE* fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL)
    {
        printf("Could not open file %s", filename);
        return 0;
    }
    printf("Start Scanning");
    for (int numRead = 0; numRead < numRecords; numRead++) {
        fscanf(fp, "%s %s %s %d", empRecs[numRead].firstName, empRecs[numRead].lastName, empRecs[numRead].birthMonth, &empRecs[numRead].birthDate);
    }
    printf("End Scanning");
    // Close the file
    fclose(fp);

    return numRecords;
}

int IDEmpBDMonth(EmployeeBD* empRecs, int numRecords, int month) {
    char monthString[15];
    int birthCount = 0;
    switch (month)    {
        case 1:
            strcpy(monthString, "January");
            break;
        case 2:
            strcpy(monthString, "February");
            break;
        case 3:
            strcpy(monthString, "March");
            break;
        case 4:
            strcpy(monthString, "April");
            break;
        case 5:
            strcpy(monthString, "May");
            break;
        case 6:
            strcpy(monthString, "June");
            break;
        case 7:
            strcpy(monthString, "July");
            break;
        case 8:
            strcpy(monthString, "August");
            break;
        case 9:
            strcpy(monthString, "September");
            break;
        case 10:
            strcpy(monthString, "October");
            break;
        case 11:
            strcpy(monthString, "November");
            break;
        case 12:
            strcpy(monthString, "December");
            break;
        default:
            printf("Error.\n");
            break;
    }

    printf("Requested Birthdays are:\n");
    printf("Lastname	Firstname	Birthday\n");
    printf("*********************************************\n");
    for(int i = 0; i < numRecords; i++) {
        if(strcmp(monthString, empRecs[i].birthMonth) == 0) {
            birthCount++;
            printf("%s %s %s %d", empRecs[i].firstName, empRecs[i].lastName, empRecs[i].birthMonth, empRecs[i].birthDate);
        }
    }
    return birthCount;

}
