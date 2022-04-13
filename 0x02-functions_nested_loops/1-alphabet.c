#include "main.h"
/**
* print_alphabet - print alphabets
* @void; no argument needed
* Return: return 0 if success
**/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
