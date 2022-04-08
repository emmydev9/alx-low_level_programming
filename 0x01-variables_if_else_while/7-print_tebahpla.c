#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry points
* @void: No argument Needed
* Return: returns 0 if success
**/
int main(void)
{
	char aph;

	for(aph = 'z'; aph >= 'a'; aph--)
	putchar(aph);

	putchar('\n');
	return (0);
}
