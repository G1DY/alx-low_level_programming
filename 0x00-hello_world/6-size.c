#include <stdio.h>
/**
* main - prints the string in the put fuction
*
* Description: using the main function
* prints the size of various types on the computer it is compiled and run on
* Return: Always 0 (success)
*/
int main(void)

{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(li));
	printf("size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}

