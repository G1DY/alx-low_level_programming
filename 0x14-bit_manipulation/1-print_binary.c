#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: binary representation of a number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	(n & 1) ? _putchar('1') : _putchar('0');
}
