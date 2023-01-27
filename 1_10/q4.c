// Author: mlj
// Purpose: Reverse the of three seperate characters
// Date: 01/26/2023

#include <stdio.h>

int main(void)
{
    char char1, char2, char3;

    char1 = 'X';
    char2 = 'M';
    char3 = 'L';

    printf("%c%c%C\n", char1, char2, char3);
    printf("%c%c%c\n", char3, char2, char1);

    return 0;
}