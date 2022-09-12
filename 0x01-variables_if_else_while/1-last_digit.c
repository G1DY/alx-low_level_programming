#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point to a function
 *
 * Description: assigns a random variable n each time it is executed
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;

	if (r > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, r);
	else if (r == 0)
		printf("Last of digit of %i is %i and is zero\n", n, r);
	else
		printf("Last digit of  %i is %i and is less than 6 and not 0\n", n, r);

	return (0);
}
