#include "hash_tables.h"



/**
 * key_index - Gives idx of a key
 *
 * @key: pointer to given key
 *
 * @size: array size of hash table
 *
 * Return: The idx of key in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index = 0;

    index = hash_djb2(key);
    index %= size;
    return (index);
}
