#include "leapyear.h"

/**
 * @brief Determine if a year is a leap year.
 *
 * Implements the standard leap year rules:
 * 1. Divisible by 400 → leap year
 * 2. Divisible by 100 but not 400 → not leap year
 * 3. Divisible by 4 but not 100 → leap year
 * 4. Otherwise → not leap year
 *
 * @param year The year to check.
 * @return true if leap year, false otherwise.
 */
bool is_leap_year(int year)
{
    if (year % 400 == 0)
        return true;

    if (year % 100 == 0)
        return false;

    return year % 4 == 0;
}
