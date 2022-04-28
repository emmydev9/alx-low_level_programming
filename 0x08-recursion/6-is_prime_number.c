#include "main.h"
#include <stdio.h>

/**
* is_prime_number - returns 1 if the input integer is a prime number.
* @n: given int
* Return: int
**/

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n % 2 != 0 && n != 1)
	{
		if ((n % 3 && n % 5 && n % 7) != 0)
		{
			return (1);
		}
	}
	return (0);
}
