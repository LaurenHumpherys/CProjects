/** lab23main.c
* ===========================================================
 * Name: Lauren Humpherys, 10 Oct 19
 * Section: M1A
 * Project: Lab 23
* ===========================================================
*/
#include "lab23functs.h"


int main(void)  {
    //char dataFile[100] = "C:\\Users\\C22Lauren.Humpherys\\CLionProjects\\CProjects\\Labs\\Lesson23\\lab23Data.txt";
    char dataFile[100] = "lab23Data.txt";

    printf("Reading number of records in the data file.\n");
    int numRecs = getNumRecs(dataFile);
    printf("%d records in the data file.\n", numRecs);

    CadetInfoStructType *cadetInfo = (CadetInfoStructType*)malloc(sizeof(CadetInfoStructType) * numRecs);

    getDataText(cadetInfo, numRecs, dataFile);

    printf("The first cadet is:\n");
    printCadetInfo(cadetInfo[0]);
    printf("The last cadet is:\n");
    printCadetInfo(cadetInfo[numRecs - 1]);

    free(cadetInfo);


return 0;
}