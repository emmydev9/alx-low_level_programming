#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry Point function
* @void: No arguments Needed
* Return: returns 0 if succes
**/
int main(void)
{
	int i = 0;

	for (i = 48; i <= 57; i++)
{
	putchar(i);
	if (i != 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
