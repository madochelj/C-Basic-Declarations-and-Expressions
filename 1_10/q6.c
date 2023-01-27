// Author: mlj
// Purpose: Compute the area of a circle
// Date: 01/26/2023

#include <stdio.h>
#include <math.h>
#define PI 3.14f

int main(void)
{
    float radius, area, diameter, circumference;
    
    radius = 6.0f;
    diameter = radius * 2;
    area = PI * radius * radius;
    circumference = 2 * PI * radius; 

    printf("Perimeter of a circle: %f\n", circumference);
    printf("Area of a circle: %f\n", area);

    return 0;
}