#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description: prints the name of the file it was compiled from,
 * followed by a newline
 *
 * Return: on success 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
