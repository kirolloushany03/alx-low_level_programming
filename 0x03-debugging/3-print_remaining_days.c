#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        if (month > 2 || (month == 2 && day == 29))
        {
            day++;
        }
    }

    int days_in_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 366 : 365;

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
