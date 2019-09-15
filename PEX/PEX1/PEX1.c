/** PEX1.C
* ===========================================================
* Name: Lauren Humpherys, 09-12-19
* Section: M1A
* Project: PEX1
* Purpose:
* ===========================================================
*/
#include "PEX1.h"

int main()  {
    printf("Pig!\n\n");

    int pips;
    printf("Input the number of pips:\n");
    scanf("%d", &pips);

    drawDie(pips);

    pips = rollDie();
    drawDie(pips);

    int die, player, currentTotal, score0, score1;
    printf("Pips, Current total, Player 0 score, Player 1 score:\n");
    scanf("%d %d %d %d", &die, &currentTotal, &score0, &score1);

    turnStatus(die, player, currentTotal, score0, score1);

    return 0;
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void drawDie(int pips)  {
    if (pips == 1) {
        printf(" ------- \n|       |\n|   *   |\n|       |\n ------- \n");
    }
    else if (pips == 2) {
        printf(" ------- \n| *     |\n|       |\n|     * |\n ------- \n");
    }
    else if (pips == 3) {
        printf(" ------- \n| *     |\n|   *   |\n|     * |\n ------- \n");
    }
    else if (pips == 4) {
        printf(" ------- \n| *   * |\n|       |\n| *   * |\n ------- \n");
    }
    else if (pips == 5) {
        printf(" ------- \n| *   * |\n|   *   |\n| *   * |\n ------- \n");
    }
    else if (pips == 6) {
        printf(" ------- \n| *   * |\n| *   * |\n| *   * |\n ------- \n");
    }
}



/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
int rollDie()   {
    int pips;
    pips = (rand() % 6) + 1;
    return pips;
}


/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
void turnStatus(int die, int player, int currentTotal, int score0, int score1)  {
    if (die = 1)    {
        printf("Player %d pigged out.\n", player);
    }
    currentTotal = score0 + score1;
    printf("Current score for player 0 = %d\n", score0);
    printf("Current score for player 1 = %d\n", score1);
    printf("Total score = %d\n", currentTotal);
}

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
//void gameStatus(int player, int score0, int score1)


/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
//int totalScore(int score, int turnTotal);
