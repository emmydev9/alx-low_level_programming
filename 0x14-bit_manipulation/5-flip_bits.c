#include "main.h"

/**
* flip_bits - flips needed to get from one number to another.
* @n: given num.
* @m: given num_two.
* Return: int.
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bit;

	for (num_bit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_bit++;
	}
	return (num_bit);
}
