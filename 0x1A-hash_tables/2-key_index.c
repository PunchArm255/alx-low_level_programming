#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - map a ki to an index
 * @key: given ki
 * @size: size of tabla array
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
