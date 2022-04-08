#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry points
* @void: No argument needed
* Return: returns 0 if no error occured
**/
int main(void)
{
	char aph;

	for (aph = 'a'; aph <= 'z'; aph++)
{
	if (aph == 'q' || aph == 'e')
		;
	else
		putchar(aph);
}
	putchar('\n');
	return (0);

}
