#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function entry point
 *
 * Description: prints all the numbers of base 16 in lowercase\n
 *hexadecimal, 0123456789ABCDEF
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
		putchar('\n');
	}
	putchar(10);

	return (10);
}

