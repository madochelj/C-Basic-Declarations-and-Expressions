// Author: mlj
// Purpose: Take integer from a use and adds them 
// Date: 01/27/2023

#include <stdio.h>

int main(void)
{
    int bin1, bin2, bin3;

    printf("Enter first integer: ");
    scanf("%d", &bin1);
    printf("Enter second integer: ");
    scanf("%d", &bin2);

    printf("Sum of the integers: %d\n", bin1 +  bin2);
    return 0;
}