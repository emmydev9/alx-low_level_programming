#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
* print_to_98 - print alphabets to the stdout
* @n: takes int as argument
* Return: void
**/
void print_to_98(int n)
{
	int i;
	
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
		if (!(i == 98))
		{
			printf(",");
			printf(" ");
		}
		}
	}
	else
	{
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (!(i == 98))
		{
			printf(",");
			printf(" ");
	}
	}
}
	printf("\n");
}
