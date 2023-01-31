#include <stdio.h>
/**
 * tortoise - Apply the constructor attribute
 */
void __attribute__((constructor)) tortoise(void);
/**
 * tortoise - implements the function
 *
 */
void tortoise(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
