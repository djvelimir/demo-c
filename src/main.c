#include <stdio.h>
#include "leapyear.h"

/*
 * Prompt the user to enter a year.
 * Returns the year as an integer.
 */
static int get_year(void)
{
    int year;

    puts("Welcome to the Leap Year Checker!");
    printf("Please enter a year: ");
    scanf("%d", &year);

    return year;
}

/*
 * Display whether the given year is a leap year.
 */
static void show_message(int year)
{
    if (is_leap_year(year))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}

int main(void)
{
    int year = get_year();
    show_message(year);

    puts("\nThank you for using the Leap Year Checker!");
    return 0;
}
