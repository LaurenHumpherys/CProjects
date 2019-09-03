/** lab09main.c
* ===========================================================
* Name: Lauren Humpherys, 08/30/19
* Section: M1A
* Project: Lab 09 - Multiple Files, Debugging, and Testing
* Purpose: Main part of program to execute
* ===========================================================
*/

#include "lab09functs.h"

int main()  {
    double vol, vol1, radians1;
    double rad, hei;
    double len, wid, hei1;
    int deg;

    printf("Enter cylinder radius followed by height:\n");
    scanf("%lf %lf", &rad, &hei);
    vol = volumeCylinder(rad, hei);
    printf("The volume is %lf.\n", vol);

    printf("Enter box width followed by height followed by depth:\n");
    scanf("%lf %lf %lf", &len, &wid, &hei1);
    vol1 = volumeBox(len, wid, hei1);
    printf("The volume is %lf.\n", vol1);

    printf("Enter degrees:\n");
    scanf("%d", &deg);
    radians1 = degToRad(deg);
    printf("%d degrees is %lf radians.\n", deg, radians1);



    return 0;
}