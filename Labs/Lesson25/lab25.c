/** lab25.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include "lab25.h"

int main()  {
    //Point x, y;
    //char filename[] = "C:\\Users\\C22Lauren.Humpherys\\CLionProjects\\CProjects\\Labs\\Lesson25\\lab25Data.csv";
    char filename[] = "lab25Data.csv";

    Point* point1 = malloc(sizeof(Point));
    Point* point2 = malloc(sizeof(Point));
    getPoints(point1, point2);

    double dist = getDistance(*point1, *point2);
    printf("%lf", dist);

    int lines = getNumLines(filename);
    USAFBaseData **bases = malloc(sizeof(USAFBaseData) * lines);

    for (int i = 0; i < lines; ++i) {
        bases[i] = malloc(sizeof(USAFBaseData));
    }

    readFile(filename, bases, lines);

    printData(bases, lines);


    return 0;
}


/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void getPoints(Point* point1, Point* point2)  {
    printf("Enter coordinates of point a: \n");
    scanf("%d %d", &point1 -> x, &point1 -> y);
    printf("Enter coordinates of point b: \n");
    scanf("%d %d", &point2 -> x, &point2 -> y);
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
double getDistance(Point point1, Point point2)  {
    double xDist = pow(point2.x - point1.x, 2.0);
    double yDist = pow(point2.y - point1.y, 2.0);

    double dist = sqrt(xDist + yDist);
    return dist;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
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

    return count;
}


/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void readFile(char filename[], USAFBaseData** baseStruct, int lines)    {
    FILE *in = fopen(filename, "rb");
    if (in == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    //fseek(in, sizeof(USAFBaseData), SEEK_SET);
    char temp[100];         //READS DATA FROM FILE AND STORES IN ARRAY
    fgets(temp, 1000, in);
    for (int i = 0; i < lines; ++i) {
        fscanf(in, "%[^\n,],", baseStruct[i]->baseName);
        fscanf(in, "%d,", &baseStruct[i]->bldgsOwned);
        fscanf(in, "%d,", &baseStruct[i]->structsOwned);
        fscanf(in, "%[^\n,],", baseStruct[i]->city);
        fscanf(in, "%[^\n,],", baseStruct[i]->state);
        fgets(temp, 1000, in);
    }
    fclose(in);
}


/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void printData(USAFBaseData** bases, int numBases)  {
    for (int i = 0; i < numBases; ++i) {
        printf("%s, ", bases[i]->baseName);
        printf("%d, ", bases[i]->bldgsOwned);
        printf("%d, ", bases[i]->structsOwned);
        printf("%s, ", bases[i]->city);
        printf("%s\n", bases[i]->state);
    }
}

