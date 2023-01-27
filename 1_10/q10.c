// Author: mlj
// Purpose: Find the product of two integers that the user will input
// Date: 01/27/2023

#include <stdio.h>

int main(void)
{
    int bin1, bin2;

    printf("Enter first intger: ");
    scanf("%d", &bin1);
    printf("Enter second integer: ");
    scanf("%d", &bin2);

    printf("Product of the two intgers: %d\n", bin1 * bin2);
    
    return 0;
}