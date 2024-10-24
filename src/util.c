#include <stdio.h>
#include <stdbool.h>

void showAsciiArt()
{

    fputs("\n", stdout);
    fputs("  /$$                                   /$$     /$$                           \n", stdout);
    fputs(" | $$                                  |  $$   /$$/                           \n", stdout);
    fputs(" | $$        /$$$$$$   /$$$$$$   /$$$$$$\\  $$ /$$//$$$$$$   /$$$$$$   /$$$$$$ \n", stdout);
    fputs(" | $$       /$$__  $$ |____  $$ /$$__  $$\\  $$$$//$$__  $$ |____  $$ /$$__  $$\n", stdout);
    fputs(" | $$      | $$$$$$$$  /$$$$$$$| $$  \\ $$ \\  $$/| $$$$$$$$  /$$$$$$$| $$  \\__/\n", stdout);
    fputs(" | $$      | $$_____/ /$$__  $$| $$  | $$  | $$ | $$_____/ /$$__  $$| $$      \n", stdout);
    fputs(" | $$$$$$$$|  $$$$$$$|  $$$$$$$| $$$$$$$/  | $$ |  $$$$$$$|  $$$$$$$| $$      \n", stdout);
    fputs(" |________/ \\_______/ \\_______/| $$____/   |__/  \\_______/ \\_______/|__/      \n", stdout);
    fputs("                               | $$                                           \n", stdout);
    fputs("                               | $$                                           \n", stdout);
    fputs("                               |__/                                           \n", stdout);
    fputs("\n", stdout);
}

int getYear()
{
    int year;

    printf("Please enter a year: ");
    scanf("%d", &year);

    return year;
}

bool isLeap(int year)
{
    return (year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0));
}

void showMessage(int year, bool isLeap)
{
    if (isLeap)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
}
