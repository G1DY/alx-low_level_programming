#include <stdio.h>
#include <stdlib.h>
/**
 * _opcodes - prints opcodes of its own main fuction
 *  @a: address of the opcodes
 *  @n: size in bytes
 *
 *  Return: void
 */
int _opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx\n", a[i]);
		if (i < n - 1)
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
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	_opcodes((char *)&main, n);
	return (0);
}
