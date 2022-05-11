#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog -  a new dog struct
* @name: dog name.
* @age: dog age.
* @owner: dog owner
* Return: dog.
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, l_name, l_owner;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}

	for (l_name = 0; name[l_name]; l_name++)
		;
	for (l_owner = 0; owner[l_owner]; l_owner++)
		;

	n_dog->name = malloc(l_name + 1);
	n_dog->owner = malloc(l_owner + 1);

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}

	for (i = 0; i < l_name; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';

	n_dog->age = age;

	for (i = 0; i < l_owner; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';
	return (n_dog);

}
