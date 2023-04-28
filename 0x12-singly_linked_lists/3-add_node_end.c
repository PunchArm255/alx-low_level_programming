#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
  * _Strlen - get string's Length
  * @s: given string
  * Return: Length
  */
size_t _Strlen(const char *s)
{
	size_t size;

	size = 0;
	while (s[size])
		size++;

	return (size);
}

/**
  * ins_node_end - adds new node to end of list_t
  * @head: head node
  * @str: new node's string
  * Return: pointer to new node (Success) | NULL (Failure)
  */
list_t *ins_node_end(list_t **head, const char *str)
{
	size_t size;
	char *s;
	list_t *tmp, *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	if (str)
		s = strdup(str), size = _Strlen(str);
	else
		s = 0, size = 0;
	new->str = s, new->len = size, new->next = 0;

	if (!(*head))
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
