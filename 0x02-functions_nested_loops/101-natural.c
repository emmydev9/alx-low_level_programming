#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point function
* @void: no argument needed
* Return: success
**/
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
