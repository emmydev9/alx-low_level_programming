#include "main.h"
#include <stdio.h>

/**
* leet - maps a char to num.
* @ms: char argument.
* Return: A char.
**/

char *leet(char *ms)
{
	int strlen = 0, i;	

	int codenum[] = {52, 51, 48, 55, 49};
	int small_alpha[] = {97, 101, 111, 116, 108};
	int capital_alpha[] =  {65, 69, 79, 84, 76};

	while (*(ms + strlen) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if(*(ms + strlen) == small_alpha[i] || *(ms + strlen) == capital_alpha[i])
			{
				*(ms + strlen) = codenum[i];
				break;
			}
		}

		strlen++;
	}
	return (ms);
}