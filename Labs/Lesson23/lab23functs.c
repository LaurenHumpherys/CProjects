/** lab23functs.c
* ===========================================================
 * Name: Lauren Humpherys, 10 Oct 19
 * Section: M1A
 * Project: Lab 23
* ===========================================================
*/
#include "lab23functs.h"


/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * ----------------------------------------------------------
 */
int getNumRecs(char *dataFile)   {
    int numRecs;
    char temp[20];
    FILE *in = fopen(dataFile, "rb");
    if (in == NULL) {
        perror("Error opening file.\n");
        return(-1);
    }
    fgets(temp, 20, in);
    temp[strlen(temp) - 1] = '\0';
    sscanf(temp, "%d", &numRecs);

    //fscanf(in, "%d", &numRecs);
    fclose(in);
    return numRecs;
}

/** ----------------------------------------------------------
 * Reads CadetInfoStructType  records from a text file
 * @param cadetRecords is the array of cadet records
 * @param numRecs is the number of records in the file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * ----------------------------------------------------------
 */
void getDataText(CadetInfoStructType *cadetRecords, int numRecs, char* dataFile)   {
    FILE *in = fopen(dataFile, "rb");
    if(in == NULL)  {
        perror("Error opening file.\n");
    }
    fseek(in, sizeof(int), SEEK_SET);
    int i = 0;
    char lastName[20];
    while (!feof(in) && i < numRecs)  {
        fscanf(in, "%s %s %d %d %d", lastName, cadetRecords[i].name, &cadetRecords[i].age, &cadetRecords[i].squad, &cadetRecords[i].year);
        strcat(cadetRecords[i].name, " ");
        strcat(cadetRecords[i].name, lastName);
        ++i;
    }

    fclose(in);
}

void printCadetInfo(CadetInfoStructType cadetRecords) {
    printf("Cadet name = %s\n", cadetRecords.name);
    printf("Cadet age = %d\n", cadetRecords.age);
    printf("Cadet squad = %d\n", cadetRecords.squad);
    printf("Cadet year = %d\n", cadetRecords.year);
}
