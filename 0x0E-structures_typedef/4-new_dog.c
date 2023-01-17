#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: 0 on success else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *dog1;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->name = malloc(i * sizeof(dog1->name));
	if (dog1->name == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dog1->name[k] = name[k];
	dog1->age = age;
	dog1->owner = malloc(j * sizeof(dog1->owner));
	if (dog1->owner == NULL)
	{
		free(dog1->owner);
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dog1->owner[k] = owner[k];
	return (dog1);
}

