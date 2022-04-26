#include "main.h"
#include <stdio.h>

/**
* _strstr -  locates a substring.
* @haystack: string.
* @needle: search string.
* Return: char.
**/

char *_strstr(char *haystack, char *needle)
{
	char *fhaystack;
	char *fneedle;

	while (*haystack != '\0')
	{
		fhaystack = haystack;
		fneedle = needle;

		while (*haystack != '\0' && *fneedle != '\0' && *haystack == *fneedle)
		{
			haystack++;
			fneedle++;
		}
		if (!*fneedle)
			return (fhaystack);
		haystack = fhaystack + 1;
	}
	return ('\0');
}
