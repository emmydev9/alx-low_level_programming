#include "_putchar.c"
/**
* print_alphabet - print alphabets to the stdout
* @void: takes no argument
**/
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <='z'; i++)
		_putchar(i);

	_putchar('\n');
}
