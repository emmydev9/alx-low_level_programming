#include "main.h"
#include <stdio.h>
/**
* swap_int - swap arguments
* @a: first pointer to an int argument
* @b: second pointer to an int argument
**/
void swap_int(int *a, int *b)
{
	int ctr;

	ctr = *a;
	*a = *b;
	*b = ctr;
}
