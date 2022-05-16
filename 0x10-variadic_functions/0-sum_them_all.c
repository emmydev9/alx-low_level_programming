#include "variadic_functions.h"


/**
* sum_them_all - sum all the argument of a function.
* @n: int
* Return: sum.
**/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr);

	va_end(ptr);
	return (sum);
}
