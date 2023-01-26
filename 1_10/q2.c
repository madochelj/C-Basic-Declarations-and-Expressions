// Author: mlj
// Purpose: Print to output what version of c were using
// Date 01/25/2023

#include <stdio.h>

int main(void)
{
#if __STDC_VERSION__ >= 201710L
	printf("We are using C18\n");
#endif

	return 0;
}
