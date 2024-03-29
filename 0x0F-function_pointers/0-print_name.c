#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(name && f))
		return;

	f(name);
}

