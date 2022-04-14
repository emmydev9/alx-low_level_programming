#include <stdio.h>
#include "main.h"
/**
* _isupper - Entry point function
* @c: int argument
* return: return either 0 or 1
**/
int _isupper(int c)
{
	if(c >= 68 && c <= 90)
	{
		return 1;
	}
	else
		return 0;
}