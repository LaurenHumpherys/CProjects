/** PEX0.c
* ==============================================================
* Name: Lauren Humpherys, 08-28-19
* Section: M1A
* Project: PEX 0 - ASCII Art
* Purpose: Understand how to use C standard library functions,
*          and user-defined functions.
* Documentation Statement:
* ==============================================================
* Instructions:
 * Complete and submit PEX0 as outlined in the writeup.
*/
#include <stdio.h>      // Include library for standard input & output (i.e. printf and scanf)

double triangleArea(double baseVal, double verticalVal, double hypotenuseVal);


int main() {
// BEGIN PART 1
    void drawFlower();         // Initialize 3 draw functions and input variable
    void drawDog();
    void drawArrow();
    int drawNum;

    printf("Please input 1 to draw flower, 2 to draw dog, or 3 to draw arrow:  \n");
    scanf("%d", &drawNum);           // Gather input to select which drawing to output

    if (drawNum == 1) {        // If input = 1, draw flower
        drawFlower();
    }
    else if (drawNum == 2)  {        // If input = 2, draw dog
        drawDog();
    }
    else if (drawNum == 3)  {        // If input = 3, draw arrow
        drawArrow();
    }

// BEGIN PART 2
    double base;
    double vertical;
    double hypotenuse;      // Initialize 3 triangle sides

    printf("Enter decimal values for base, vertical, & hypotenuse: \n");
    scanf("%lf", &base);          // Gather input for 3 triangle side measurements
    scanf("%lf", &vertical);
    scanf("%lf", &hypotenuse);


    if (base > 0 && vertical > 0 && hypotenuse > 0)     {
        triangleArea(base, vertical, hypotenuse);
    }                                               // Call triangleArea to calculate area of triangle using inputted measurements
    // If measurements fit those of a right triangle, output area
    // If invalid measurements, print statement saying measurements don't describe right triangle
    return 0;        // End of program
}

void drawFlower() {           // User definition for flower drawing
    printf("    _ _\n");
    printf("   (_\\_)\n");
    printf("  (__<_{}\n");
    printf("   (_/_)\n");
    printf("  |\\ |\n");
    printf("   \\\\| /|\n");
    printf("    \\|//\n");
    printf("     |/\n");
    printf(",.,.,|.,.,.\n");
    printf("^`^`^`^`^`^\n");
}

void drawDog() {           // User definition for dog drawing
    printf("^..^      /\n");
    printf("/_/\\_____/\n");
    printf("   /\\   /\\\n");
    printf("  /  \\ /  \\\n");
}

void drawArrow()  {           // User definition for arrow drawing
    printf("**\n");
    printf("**\n");
    printf("**\n");
    printf("**\n");
    printf("**\n");
    printf("****\n");
    printf("***\n");
    printf("**\n");
    printf("*\n");
}

double triangleArea(double b, double v, double h)  {     // User definition for triangle area calculation
    double area;

    area = (b * v) / 2.0;

    if ((b * b) + (v * v) == (h * h))   {        // If valid right triangle measurements, output measurements & area
        printf("The area of a right triangle with a base side of %.0lf inches, a height of %.0lf inches, and a hypotenuse of %.0lf inches is %.2lf square inches. \n", b, v, h, area);
        return 0;
    }
    else  {                                      // If invalid right triangle measurements, output statement, return -1.0
        printf("Your inputs do not describe a right triangle! \n");
        return -1.0;
    }

}



