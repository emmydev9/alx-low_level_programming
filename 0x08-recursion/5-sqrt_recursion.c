#include "main.h"
#include <stdio.h>

/**
* p_opr - returns the natural square root of a number.
* @n: given int.
* @i: iterator.
* Return: square n.
**/

int p_opr(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
		{
			return (i);
		}
		else
			return (-1);
	}
	return (0 + p_opr(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: given int.
* Return: square n.
**/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (p_opr(n, 2));
}
