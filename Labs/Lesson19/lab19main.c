/** lab19main.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include "lab19functs.h"

int main()  {
    char str[MAX_STR_LEN], aChar, bChar;

    printf("Function - 1\n");
    printf("Enter a string (<= 80 chars):");
    fgets(str, MAX_STR_LEN, stdin);
    printf("Enter a search character followed by replace character:");
    scanf("%c %c", &aChar, &bChar);
    replStr(str, aChar, bChar);
    replStr(str, '\n', '\0');
    printf("New string (between arrows): -->%s<--\n", str);

    char ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    char searchChars[MAX_STR_LEN], rChar;
    printf("Function - 2\n");
    printf("Enter a string (<= 80 chars):");
    fgets(str, MAX_STR_LEN, stdin);
    printf("\nEnter a search string (<= 80 chars):");
    fgets(searchChars, MAX_STR_LEN, stdin);
    printf("Enter a replace character:");
    scanf("%c", &rChar);
    replStr(str, '\n', '\0');
    replStr(searchChars, '\n', '\0');
    replMultiChar(str, searchChars, rChar);
    printf("New string (between arrows): -->%s<--\n", str);

    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    int locations[MAX_STR_LEN];
    char searchChar;
    printf("Function - 3\n");
    printf("Enter a string (<= 80 chars):");
    fgets(str, MAX_STR_LEN, stdin);
    printf("Enter a character whose locations you wish to find:");
    scanf("%c", &searchChar);
    int count = findLocations(str, locations, searchChar);
    printf("There are %d occurrences of %c.\n", count, searchChar);
    for (int i = 0; i < count; i++) {
        printf("%c found at location %d.\n", searchChar, locations[i]);
    }

    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    printf("Function - Challenge\n");
    char searchStr[MAX_STR_LEN];
    printf("Enter a string (<= 80 chars):");
    printf("\n");
    fgets(str, MAX_STR_LEN, stdin);
    printf("Enter a search string (<= 80 chars):");
    printf("\n");
    fgets(searchStr, MAX_STR_LEN, stdin);
    count = countSeqStr(str, searchStr);
    printf("There are %d occurrences of %s.\n", count, searchStr);


    return 0;
}
