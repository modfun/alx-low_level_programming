#include "lists.h"
#include <stdio.h>

/**
 * print_list - print a linked list
 * @h: a pointer to list_t (header of the list)
 *
 * Description: a function that prints all the elements of a list_t list.
 * Return: the number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *p = NULL;

	if (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		p = h->next;
		count++;
	}

	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		count++;
	}

	return (count);
}
