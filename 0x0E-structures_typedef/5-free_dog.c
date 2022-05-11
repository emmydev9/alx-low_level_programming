#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - free memory
* @d: memory to free
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
