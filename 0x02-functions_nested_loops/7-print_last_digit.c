#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
* print_last_digit - print alphabets to the stdout
* @n: takes an integer argument
* Return: return int
**/
int  print_last_digit(int n)
{
	int L;

	L = n % 10;

	if (L < 0)
	{
		_putchar(-L + 48);
		return (-L);
	}
	else
	{
		_putchar(L + 48);
		return (L);
	}
}
