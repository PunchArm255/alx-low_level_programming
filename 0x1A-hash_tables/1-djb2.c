#include "hash_tables.h"

/**
 * hash_djb2 - implementation of djb2 algorithm
 *
 * @str: stringer used to gen hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c;
    }
    return (hash);
}
