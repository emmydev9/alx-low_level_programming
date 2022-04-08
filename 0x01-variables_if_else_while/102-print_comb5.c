
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry points
* @void: No arguments
* Return: returns 0 if success
**/
int main(void)
{
	int i, j, k, l, o1, o2;

	i = j = k = l = 48;

	while (l < 58)
{
	k = 48;
	while (k < 58)
{
	j = 48;
	while (j < 58)
{
	i = 48;
	while (i < 58)
{
	o1 = (l * 10) + k;
	o2 = (j * 10) + i;
	if (o1 < o2)
{
	putchar(l);
	putchar(k);
	putchar(' ');
	putchar(j);
	putchar(i);
	if (l == 57 && k == 56 && j == 57 && i == 57)
		break;

	putchar(',');
	putchar(' ');
}
	i++;
}
	j++;
}
	k++;
}
	l++;
}
	putchar('\n');
	return (0);
}

