/** lab09main.c
* ===========================================================
* Name: Name, Date
* Section:
* Project:
* Purpose:
* ===========================================================
*/

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
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