#include "variadic_functions.h"

/**
* print_numbers - prints numbers with separator
* @separator: char.
* @n: number of arg.
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, pointer;
	va_list ptr;

	if (n != 0)
	{
		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			pointer = va_arg(ptr, unsigned int);
			printf("%d", pointer);
			if (i < n - 1 && separator)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ptr);
	}
}
