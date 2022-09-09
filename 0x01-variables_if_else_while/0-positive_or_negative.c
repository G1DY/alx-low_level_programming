#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- check if a number is posite, negative or zero
 * 
 * Description: program assigns a random variabe n each time
 * it is executed
 * 
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is zero\n", n);
	if (n>0)
		printf("%d is postive\n", n);
	if (n<0)
		printf("%d is negative\n", n);

	return (0);
}
