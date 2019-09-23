/** lab15main.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include <stdio.h>
#include "lab15functs.h"
#include "lab15fbFuncts.h"

int main()  {

    // Name 0, Something 1, Attempts 2, yards 3, touchdowns 4
    int footballData[MAXPLAYERS][DATACOLS];

    int arraySize = readData(footballData);
    printf("%d players data read.\n", arraySize);

    //1. Print "The player ID 0 is Aaron Jones and he scored 4 touchdowns in 2017."
    printf("The player ID 0 is %s and he scored %d touchdowns in 2017.\n", getPlayerName(0), footballData[0][2]);

    //2. Print "The player ID 122 is Ezekiel Elliott and he rushed for 983 yards in 2017."
    int playerID = 122;
    printf("The player ID %d is %s and he rushed for %d yards in 2017.\n", playerID, getPlayerName(playerID), footballData[playerID][1]);

    //3. Print "The player with the most yards in 2017 is Kareem Hunt and he had 1327."
    //int temp;
    int maxIndex = findMaxIndex(footballData, 1, arraySize);
    //int mostYards = findMaxIndex(footballData[MAXPLAYERS][1], arraySize);
    printf("The player with the most yards in 2017 is %s and he had %d.\n", getPlayerName(maxIndex), footballData[maxIndex][1]);

    //4. Print "The player with the most TDs in 2017 is Todd Gurley and he had 13."
    int mostTouchdowns = findMaxIndex(footballData, 2, arraySize);
    printf("The player with the most TDs in 2017 is %s and he had %d.\n", getPlayerName(mostTouchdowns), footballData[mostTouchdowns][2]);

    //5. Print "The number of players with more than 10 TDs in 2017 is 2."
    int threshold = 10;
    int numPlayers = numPlayerOverX(footballData, 2, threshold, arraySize);
    printf("The number of players with more than %d TDs in 2017 is %d.\n", threshold, numPlayers);

    //6. Print "The number of players with more than 1000 yards in 2017 is 9."
    threshold = 1000;
    numPlayers = numPlayerOverX(footballData, 1, threshold, arraySize);
    printf("The number of players with more than %d yards in 2017 is %d.\n", threshold, numPlayers);

    //7. Print "The number of players with more than 100 attempts in 2017 is 48."
    threshold = 100;
    numPlayers = numPlayerOverX(footballData, 0, threshold, arraySize);
    printf("The number of players with more than %d attempts in 2017 is %d.\n", threshold, numPlayers);

    //8. Print "The player with the most yards per carry (>100 attempts) is Alvin Kamara and he had 6.1."
    threshold = 100;
    int index = getMaxYardsPerCarryIndex(threshold, footballData, arraySize);
    double yardsPerCarry = getMaxYardsPerCarry(threshold, footballData, index, arraySize);
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", threshold, getPlayerName(index), yardsPerCarry);

    //9. Print "The player with the most yards per carry (>50 attempts) is Dak Prescott and he had 6.3."
    threshold = 50;
    index = getMaxYardsPerCarryIndex(threshold, footballData, arraySize);
    yardsPerCarry = getMaxYardsPerCarry(threshold, footballData, index, arraySize);
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", threshold, getPlayerName(index), yardsPerCarry);


    //10. Print "The player with the most yards per carry (>10 attempts) is Cordarrelle Patterson and he had 9.3."
    threshold = 10;
    index = getMaxYardsPerCarryIndex(threshold, footballData, arraySize);
    yardsPerCarry = getMaxYardsPerCarry(threshold, footballData, index, arraySize);
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", threshold, getPlayerName(index), yardsPerCarry);

    return 0;
}
