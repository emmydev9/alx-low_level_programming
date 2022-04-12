#include "main.h"
/**
* print_sign - print alphabets to the stdout
* @n: takes an integer argument
* Return: returns 1 if lowercase character is met
**/
int  print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
_putchar('\n');
}
