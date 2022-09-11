#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point of the function
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
