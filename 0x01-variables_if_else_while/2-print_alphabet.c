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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);

		putchar ('\n');

		return (0);
}
