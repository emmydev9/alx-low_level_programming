#include "main.h"

/**
* rot13 - obsfucation of string.
* @rot: pointer to a char
* Return: A char.
**/

char *rot13(char *rot)
{
	int strlen = 0, i;

	char all_alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(rot + strlen) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(rot + strlen) == all_alpha[i])
			{
				*(rot + strlen) = rot13[i];
				break;
			}
		}
		strlen++;
	}
	return (rot);
}
