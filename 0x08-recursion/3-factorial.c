#include "main.h"
#include <stdio.h>

/**
* factorial - the factorial of a given number.
* @n: Any given number.
* Return: int
**/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n > 0)
		n *= factorial(n - 1);

	return (n);
}
