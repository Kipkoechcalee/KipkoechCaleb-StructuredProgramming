#include <stdio.h>
#include <stdlib.h>
//asking for user input
//Calculation of surface area of a sphere

int main()
{
    double const PI = 3.142;
    double R;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &R);

    printf("The surface area is %.4lf", 4* PI*pow(R, 2));
    return 0;
}

