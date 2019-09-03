/** lab09functs.h
* ===========================================================
* Name: Lauren Humpherys, 08/30/19
* Section: M1A
* Project: Lab 9 - Multiple Files, Debugging, and Testing
* Purpose: Header file to serve as initial instructions for processor
* ===========================================================
*/
#include "lab09functs.h"

int main(void)  {
    printf("Testing started\n");
    assert(volumeCylinder(1, 1) == M_PI);
    assert(volumeCylinder(8, 5) == (M_PI * 320));
    assert(volumeCylinder(3, 10) == (M_PI * 90));

    assert(volumeBox(1, 1, 1) == 1);
    assert(volumeBox(3, 6, 9) == 162);
    assert(volumeBox(2, 9, 3) == 54);

    assert(degToRad(100) == ((5 * M_PI)/9));
    assert(degToRad(270) == (3*M_PI)/2);
    assert(degToRad(25) == (5*M_PI)/36);



    printf("Testing complete\n");

    return 0;

}