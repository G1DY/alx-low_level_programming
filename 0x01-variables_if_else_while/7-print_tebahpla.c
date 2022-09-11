#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
