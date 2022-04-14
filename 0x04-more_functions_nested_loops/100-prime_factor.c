#include <stdio.h>
#include <stdlib.h>
/**
* main - print largest prime factor
* @void: no argument
* Return: on success
**/
int main(void)
{
	long int n, m;

	n = 612852475143;

	for (m = 2; m <= n; m++)
	{
		if (n % m == 0)
		{
			n /= m;
			m--;
		}
	}
	printf("%ld", m);
	return (0);
}
