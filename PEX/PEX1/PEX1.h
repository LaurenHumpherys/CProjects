/** PEX1.h
* ===========================================================
* Name: Lauren Humpherys, 09-12-19
* Section: M1A
* Project: PEX1
* Purpose:
* ===========================================================
*/

#ifndef MYEXE_PEX1_H
#define MYEXE_PEX1_H

#include <stdio.h>
#include <stdlib.h>

void drawDie(int pips);
int rollDie();
void turnStatus(int die, int player, int currentTotal, int score0, int score1);
void gameStatus(int player, int score0, int score1);
int totalScore(int score, int turnTotal);

#endif //MYEXE_PEX1_H
