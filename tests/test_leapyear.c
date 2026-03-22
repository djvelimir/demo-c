#include <assert.h>
#include "leapyear.h"

int main(void)
{
    // Typical leap years
    assert(is_leap_year(2020));
    assert(is_leap_year(2000));

    // Typical non-leap years
    assert(!is_leap_year(1900));
    assert(!is_leap_year(2023));

    // Edge cases
    assert(is_leap_year(4));
    assert(!is_leap_year(1));

    return 0;
}