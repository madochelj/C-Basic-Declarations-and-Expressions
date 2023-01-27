// Author: mlj
// Purpose: Compute the perimeter and area of an rectangle
// Date: 01/26/2023

#include <stdio.h>

int main(void)
{
    int legnth, width, area, perimeter;

    legnth = 7;
    width = 5;

    perimeter = legnth * 2 + width * 2;
    area = legnth * width;

    printf("Perimeter of the rectangle: %d\n", perimeter);
    printf("Area of a rectangel: %d\n", area);

    return 0;
}