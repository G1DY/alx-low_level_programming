#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints a string followed by a newline
 * @separator: is the string between the string
 * @n: number of strings passed
 *
 * Return: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil)
 * else rint a new line at the end of your function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
