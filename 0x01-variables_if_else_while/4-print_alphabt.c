#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point of the function
 *
 * Description: prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar(10);

	return (0);
}
