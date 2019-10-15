/** lab23functs.h
* ===========================================================
 * Name: Lauren Humpherys, 10 Oct 19
 * Section: M1A
 * Project: Lab 23
* ===========================================================
*/

#ifndef LESSON23_LAB23FUNCTS_H
#define LESSON23_LAB23FUNCTS_H

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>


typedef struct CadetInfoStruct {
    char name[50];
    int age;
    int squad;
    int year;
} CadetInfoStructType;

/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * ----------------------------------------------------------
 */
 int getNumRecs(char *dataFile);

/** ----------------------------------------------------------
* Reads CadetInfoStructType  records from a text file
* @param cadetRecords is the array of cadet records
* @param numRecs is the number of records in the file
* @param dataFile is a string that indicates the path to and filename of the datafile
* ----------------------------------------------------------
*/
void getDataText(CadetInfoStructType *cadetRecords, int numRecs, char *dataFile);

/** ----------------------------------------------------------
 * Prints cadet record information gathered by getDataText
 * @param cadetRecords is the array of cadet records
 * @return number of records in the file or -1 on error
 * ----------------------------------------------------------
 */
void printCadetInfo(CadetInfoStructType cadetRecords);

#endif //LESSON23_LAB23FUNCTS_H
