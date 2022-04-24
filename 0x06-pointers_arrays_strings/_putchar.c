#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* _putchar - write a char to stdout.
* @n: char.
* Return: int.
**/

int _putchar(char n)
{
	return (write(1, &n, 1));
}