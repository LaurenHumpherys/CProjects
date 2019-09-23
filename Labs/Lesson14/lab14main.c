/** lab14main.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/
#include "lab14functs.h"
#include "lab14fbFuncts.h"

int main(void)  {

    int attempts[MAXPLAYERS];
    int yards[MAXPLAYERS];
    int touchdowns[MAXPLAYERS];
    int arraySize;

    arraySize = readData(attempts, yards, touchdowns);
    printf("%d players data read.\n", arraySize);

    //1. Print "The player ID 0 is Aaron Jones and he scored 4 touchdowns in 2017."
    printf("The player ID 0 is %s and he scored %d touchdowns in 2017.\n", getPlayerName(0), touchdowns[0]);

    //2. Print "The player ID 122 is Ezekiel Elliott and he rushed for 983 yards in 2017."
    int playerId = 122;
    printf("The player ID %d is %s and he rushed for %d yards in 2017.\n", playerId, getPlayerName(playerId), yards[playerId]);

    //3. Print "The player with the most yards in 2017 is Kareem Hunt and he had 1327."
    int mostYards = findMaxIndex(yards, arraySize);
    printf("The player with the most yards in 2017 is %s and he had %d.\n", getPlayerName(mostYards), yards[mostYards]);

    //4. Print "The player with the most TDs in 2017 is Todd Gurley and he had 13."
    int mostTouchdowns = findMaxIndex(touchdowns, arraySize);
    printf("The player with the most TDs in 2017 is %s and he had %d.\n", getPlayerName(mostTouchdowns), touchdowns[mostTouchdowns]);

    //5. Print "The number of players with more than 10 TDs in 2017 is 2."
    int threshold = 10;
    int numPlayers = numPlayerOverX(touchdowns, threshold, arraySize);
    printf("The number of players with more than %d TDs in 2017 is %d.\n", threshold, numPlayers);

    //6. Print "The number of players with more than 1000 yards in 2017 is 9."
    threshold = 1000;
    numPlayers = numPlayerOverX(yards, threshold, arraySize);
    printf("The number of players with more than %d yards in 2017 is %d.\n", threshold, numPlayers);

    //7. Print "The number of players with more than 100 attempts in 2017 is 48."
    threshold = 100;
    numPlayers = numPlayerOverX(attempts, threshold, arraySize);
    printf("The number of players with more than %d attempts in 2017 is %d.\n", threshold, numPlayers);

    //8. Print "The player with the most yards per carry (>100 attempts) is Alvin Kamara and he had 6.1."
    threshold = 100;
    int playerIndex = getMaxYardsPerCarryIndex(threshold, yards, attempts);
    double yardsPerCarry = (double)yards[playerIndex] / attempts[playerIndex];
    //double yardsPerCarry = getMaxYardsPerCarry(playerIndex, threshold, yards, attempts);
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", threshold, getPlayerName(playerIndex), yardsPerCarry);

    //9. Print "The player with the most yards per carry (>50 attempts) is Dak Prescott and he had 6.3."
    threshold = 50;
    playerIndex = getMaxYardsPerCarryIndex(threshold, yards, attempts);
    yardsPerCarry = (double)yards[playerIndex] / attempts[playerIndex];
    //yardsPerCarry = getMaxYardsPerCarry(threshold, yards, attempts);
    //yardsPerCarry = (double)yards[playerIndex] / attempts[playerIndex];
    //yardsPerCarry = getMaxYardsPerCarry(playerIndex, threshold, yards, attempts);
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", threshold, getPlayerName(playerIndex), yardsPerCarry);


    //10. Print "The player with the most yards per carry (>10 attempts) is Cordarrelle Patterson and he had 9.3."
    threshold = 10;
    playerIndex = getMaxYardsPerCarryIndex(threshold, yards, attempts);
    yardsPerCarry = (double)yards[playerIndex] / attempts[playerIndex];
    //yardsPerCarry = getMaxYardsPerCarry(threshold, yards, attempts);
    //yardsPerCarry = (double)yards[playerIndex] / attempts[playerIndex];
    //yardsPerCarry = getMaxYardsPerCarry(playerIndex, threshold, yards, attempts);
    printf("The player with the most yards per carry (>%d attempts) is %s and he had %.1lf.\n", threshold, getPlayerName(playerIndex), yardsPerCarry);
    return 0;
}
