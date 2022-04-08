#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry points Function
* @void: No arguments needed
* Return: return 0 if success
**/
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
{
	for (j = i + 1; j <= 57; j++)
{
	putchar(i);
	putchar(j);
	if (i != 57 && i != 56)
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
