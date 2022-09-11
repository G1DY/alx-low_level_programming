#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: Positive anything is better than negative nothing
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*code goes here*/

	{
		if (n == 0)
			printf("%d is zero\n", n);
		else if (n < 0)
			printf9"%d is negative\n", n);
		else if (n > 0)
			printf("%d is positive\n", n);

		return (0);
	}
}
