#include "main.h"
#include "stdio.h"
/**
* main - Entry point
* @void: No argument needed
* Return: returns 0 if no error occured
**/
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}