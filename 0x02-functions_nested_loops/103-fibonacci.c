#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry points functions
* @void: no arguments needed
* Return: success
**/
int main(void)
{
	long int n1, n2, fn, sum;

n1 = 1;
n2 = 2;
fn = sum = 0;

while (fn <= 4000000)
{
	fn = n1 + n2;
	n1 = n2;
	n2 = fn;
	if ((n1 % 2) == 0)
	{
		sum += 1;
	}
}
	printf("%ld\n", sum);
	return (0);

}
