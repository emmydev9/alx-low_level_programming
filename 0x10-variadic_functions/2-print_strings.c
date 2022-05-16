#include "variadic_functions.h"

/**
* print_strings - prints string from list of arg
* @separator: separator string.
* @n: number of arg
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *pointer;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		pointer = va_arg(ptr, char *);
		if (pointer)
			printf("%s", pointer);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
