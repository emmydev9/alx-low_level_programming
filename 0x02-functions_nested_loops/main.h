#include "stdio.h"
/**
* print_alphabet - print alphabets to the stdout
* @void: takes no argument
**/
void print_alphabet_x10(void)
{
	int i, j;
	for (i = 0; i < 10; i++)
{
	for (j = 97; j <= 122; j++)
		putchar(j);

	putchar('\n');
}

}
