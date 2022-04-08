#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry points
* @void: No argument required
* Return: return 0 if success
**/
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
{
	for (j = i + 1; j <= 57; j++)
{
	for (k = j + 1; k <= 57; k++)
{
	putchar(i);
	putchar(j);
	putchar(k);
	if (i != 57 && i != 55)
{
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}
