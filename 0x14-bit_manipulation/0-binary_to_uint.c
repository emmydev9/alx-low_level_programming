#include "main.h"

/**
* binary_to_uint - convert binary string to unit
* @b: binary string.
* Return: int.
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int  ui = 0;
	int base_two, i = 0;

	if (b == NULL)
		return (0);
	while (*(b + i) != '\0')
		i++;
	for (i--, base_two = 1; i >= 0; i--, base_two *= 2)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		if (b[i] & 1)
			ui += base_two;
	}
	return (ui);
}
