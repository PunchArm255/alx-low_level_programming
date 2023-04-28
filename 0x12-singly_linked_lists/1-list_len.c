#include "lists.h"
#include <stddef.h>

/**
  * l_len - number of nodes in a list_t
  * @h: head node
  * Return: Length of list_t (number)
  */
size_t l_len(const list_t *h)
{
	unsigned int size;
	const list_t *tmp;

	tmp = h, size = 0;
	while (tmp)
		size++, tmp = tmp->next;
	return (size);
}
