#include "main.h"

/**
 * _isalpha - checks for characters in the alphabet
 * @c: is the character to be checked
 *
 * Return: 1 if lower or upper,0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
