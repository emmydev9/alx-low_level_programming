#include "stdio.h"
/**
* print_alphabet - print alphabets to the stdout
* @void: takes no argument
**/
void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
		putchar(i);

	putchar('\n');
}
