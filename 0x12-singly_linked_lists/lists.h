#ifndef H
#define H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t p_list(const list_t *h);

size_t l_len(const list_t *h);

list_t *ins_node(list_t **head, const char *str);

list_t *ins_node_end(list_t **head, const char *str);

void f_list(list_t *head);

void __attribute__((constructor)) premain();


#endif /* H */
