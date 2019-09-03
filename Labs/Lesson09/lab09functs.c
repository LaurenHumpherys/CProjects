/** lab09functs.c
* ===========================================================
* Name: Lauren Humpherys, 08/30/19
* Section: M1A
* Project: Lab 9 - Multiple Files, Debugging, and Testing
* Purpose: Define all user-defined functions called in lab09main.c
* ===========================================================
*/
#include "lab09functs.h"

double volumeCylinder(double r, double h) {
    double v;
    v = M_PI * r * r * h;
    return v;
}

double volumeBox(double l, double w, double h1)   {
    double vb;
    vb = l * w * h1;
    return vb;
}

double degToRad(int d)  {
    double radians;
    radians = (d * M_PI) / 180;
    return radians;
}