#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char name
 * @age: age of the dog
 * @owner: pointer to character owner
 *
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
