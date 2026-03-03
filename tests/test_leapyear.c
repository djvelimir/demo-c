#include <assert.h>
#include "leapyear.h"

int main(void)
{
    // Typical leap years
    assert(is_leap_year(2020) == true);
    assert(is_leap_year(2000) == true);

    // Typical non-leap years
    assert(is_leap_year(1900) == false);
    assert(is_leap_year(2023) == false);

    // Edge cases
    assert(is_leap_year(4) == true);
    assert(is_leap_year(1) == false);

    return 0;
}