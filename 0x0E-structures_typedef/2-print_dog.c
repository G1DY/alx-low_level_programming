#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: NULL
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (d->name)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");
		printf("Age: ");
		if (d->age)
			printf("d%\n", d->age);
		else 
			printf("nil\n", d->age);
		print("Owner: ");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
}

