#include "main.h"
/**
* main - Entry point
* @void: No argument needed
* Return: returns 0 if no error occured
**/
int main(void)
{
    int r;

    r = _islower('H');

    putchar(r + '0');
    r = _islower('o');

    putchar(r + '0');
    r = _islower(108);

    putchar(r + '0');
    putchar('\n');
    return (0);
}