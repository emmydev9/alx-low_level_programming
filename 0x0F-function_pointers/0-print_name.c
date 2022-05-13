#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - prints a name.
* @name: given name.
* @f: function pointer
**/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
