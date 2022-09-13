#include <stdio.h>

/**
 *  main - prints alphabet in lower case
 *
 *  Description: use putchar function
 *
 *  Return: Always 0 (success)
 *
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
