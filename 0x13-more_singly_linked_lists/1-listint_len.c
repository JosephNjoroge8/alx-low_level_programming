#include "lists.h"

/**
 * listint_len - prints the  number of elements in our linked lists
 * @h: the linked list to traverse
 *
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}

	return (num);
}
