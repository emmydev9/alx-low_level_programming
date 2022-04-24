#include "main.h"
#include <stdio.h>

/**
* cap_string - capitalize the first word,
* @cs: pointer to a char.
* Return: char.
**/

char *cap_string(char *cs)
{
	int strlen = 0, i = 0;


	int limiter[] = {32, 9, 10, 46, 44, 31, 33, 34, 40, 41, 59, 123, 125};

	if (*(cs + strlen) != '\0' && *(cs + strlen) >= 97 && *(cs + strlen) <= 122)
		*(cs + strlen) = *(cs + strlen) - 32;

	strlen++;

	while (*(cs + strlen) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(cs + strlen) == limiter[i])
			{
				strlen++;
				if (*(cs + strlen) >= 97 && *(cs + strlen) <= 122)
					*(cs + strlen) = *(cs + strlen) - 32;
				strlen--;
				break;
			}
		}
		strlen++;
	}
	return (cs);
}
