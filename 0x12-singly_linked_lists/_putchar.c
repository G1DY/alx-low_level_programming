#include <stdio.h>
#include <stdlib.h>
/**
 * _putchar - writes 1 character
 * @c: the character to be printed
 *
 * Return: 1 success else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
