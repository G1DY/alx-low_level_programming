#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string
 * @str: string to be duplicated
 *
 * Return: pointer to the string (success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *duplicate;

	Unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[le])
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}


