#include <stdio.h>
#include <stdio.h>
/**
* main - Entry points
* @void: No arguments
* Return: returns 0 if success
**/
int main(void)
{
	char aph;

	for (aph = 'a'; aph <= 'z'; aph++)
		putchar(aph);

	for (aph = 'A'; aph <= 'Z'; aph++)
		putchar(aph);

	putchar('\n');
	return (0);
}
