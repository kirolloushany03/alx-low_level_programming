#include <stdio.h>
#include "main.h"

void print_remaining_days(int month, int day, int year)
{
int days_in_year;
if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
{
if (month > 2 || (month == 2 && day == 29))
{
day++;
}
days_in_year = 366;
}
else
{
days_in_year = 365;
}

if (day > days_in_year)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - days_in_year, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", days_in_year - day);
}
}
