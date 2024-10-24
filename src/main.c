#include <stdio.h>
#include "util.h"

int main()
{
    showAsciiArt();

    int year = getYear();

    showMessage(year, isLeap(year));

    return 0;
}
