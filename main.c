#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        // leap year if perfectly divisible by 400
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0)
    {
        // not a leap year if divisible by 100
        // but not divisible by 400
        printf("%d is not a leap year.", year);
    }
    else if (year % 4 == 0)
    {
        // leap year if not divisible by 100
        // but divisible by 4
        printf("%d is a leap year.", year);
    }
    else
    {
        // all other years are not leap years
        printf("%d is not a leap year.", year);
    }

    return 0;
}