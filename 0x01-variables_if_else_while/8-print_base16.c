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
	char ch;
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (10);
}

