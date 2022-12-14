#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet(void) /*The fuction print_aphabet*/
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
