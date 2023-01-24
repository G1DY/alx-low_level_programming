#include <stdio.h>
#include <stdlib.h>
/**
 * _opcodes - prints opcodes of its own main fuction
 *  @a: address of the opcodes
 *  @s: size in bytes
 *
 *  Return: void
 */
int _opcodes(char *a, int s)
{
	int i;

	for (i = 0; i < s; i++)
	{
		printf("%.2hhx\n", a[i]);
		if (i < s - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - entry to the fuction
 * @argc: argument count
 * @argv: pointer to argument array
 *
 * Return: 0 always success
 */
int main(int argc, char **argv)
{
	int s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	s = atoi(argv[1]);
	if (s < 2)
	{
		printf("Error\n");
		exit(2);
	}
	_opcodes((char *)&main, s);
	return (0);
}
