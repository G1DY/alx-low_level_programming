#include <stdio.h>
/**
 * _putchar - writes c to std output
 * @c: the character to be printed
 *
 * Return: 1 success, -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
