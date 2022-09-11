#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: prints alphabet in lowercase then uppercase
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)

{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10);/* this is the ASCII code for new line*/

	return (0);
}
