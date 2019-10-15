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
        fscanf(in, "%s %s %d %d %d", cadetRecords[i].name, lastName, &cadetRecords[i].age, &cadetRecords[i].squad, &cadetRecords[i].year);
        strcat(" ", cadetRecords[i].name);
        strcat(lastName, cadetRecords[i].name);
        ++i;
    }

    fclose(in);
}

void printCadetInfo(CadetInfoStructType cadetRecords) {
    for (int i = 0; i <= 123; i++) {
        if (i == 1) {
            printf("The first cadet is:\n");
            printf("Cadet name: %s\n", cadetRecords.name);
            printf("Cadet age: %d\n", cadetRecords.age);
            printf("Cadet squad: %d\n", cadetRecords.squad);
            printf("Cadet year: %d\n", cadetRecords.year);
        } else if (i == 123) {
            printf("The last cadet is:\n");
            printf("Cadet name: %s\n", cadetRecords.name);
            printf("Cadet age: %d\n", cadetRecords.age);
            printf("Cadet squad: %d\n", cadetRecords.squad);
            printf("Cadet year: %d\n", cadetRecords.year);
        }
    }
}
