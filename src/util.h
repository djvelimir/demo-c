#ifndef __UTIL_H_
#define __UTIL_H_

#include <stdbool.h>

void showAsciiArt();

int getYear();

bool isLeap(int year);

void showMessage(int year, bool isLeap);

#endif