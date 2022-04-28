#include "main.h"
#include <unistd.h>

int _putchar(char n)
{
	return (write(1, &n, 1));
}