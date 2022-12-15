#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the sign of the number to be printed
 *
 * Return: 1 when positive, -1 when negative and z
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
