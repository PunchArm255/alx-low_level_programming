#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
  * _Strlen - get a string's Length
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
  * ins_node - adds new node to head of list_t
  * @head: head node
  * @str: node's string
  * Return: pointer to new head (Success) | NULL (Failure)
  */
list_t *ins_node(list_t **head, const char *str)
{
	char *s;
	size_t size;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (0);
	if (str)
		s = strdup(str), size = _Strlen(str);
	else
		s = 0, size = 0;
	tmp->str = s, tmp->len = size;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
