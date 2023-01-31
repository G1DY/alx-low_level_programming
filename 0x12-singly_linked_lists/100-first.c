#include <stdio.h>
/**
 * print_line - function before main
 * @constructor: the constructor
 *
 * Return: a string 
 */

void __attribute__((constructor)) print_line(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
