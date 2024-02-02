#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a cutie hash table
 * @size: hash table size
 *
 * Return: pointer to hash tabla (Success) | NULL (Failure)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(*table));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof((*table->array)) * size);
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
