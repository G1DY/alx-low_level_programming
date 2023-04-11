#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key.
 *
 * @key: is the key
 * @size: size of the array
 * Description: uses hash_djb2 function 
 * Return: Key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
