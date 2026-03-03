#include <stdio.h>
#include "leapyear.h"

static int get_year(void)
{
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);
    return year;
}

static void show_message(int year)
{
    if (is_leap_year(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
}

int main(void)
{
    int year = get_year();
    show_message(year);
    return 0;
}
