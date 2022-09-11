#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always o (success)
 */
int main(void)

{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
