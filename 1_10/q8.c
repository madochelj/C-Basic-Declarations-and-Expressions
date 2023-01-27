// Author: mlj
// Purpose: Convert (days) to years, weeks and days
// Date: 01/26/2023

#include <stdio.h>

int main(void)
{
    int total_days, years, weeks, days, remainder;

    total_days = 1329;
    years = total_days / 365;
    remainder = total_days % 365;
    weeks = remainder / 7;
    remainder = weeks % 7;
    days = remainder;

    printf("Number of days: %d\n", total_days);
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}