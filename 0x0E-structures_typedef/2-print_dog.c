#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - print out the dog features.
* @d: struct dog
**/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
