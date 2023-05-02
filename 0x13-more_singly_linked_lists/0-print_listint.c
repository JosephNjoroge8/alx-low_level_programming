 #include "lists.h"

/**
 * print_listint - prints the elements in a linked list
 * @h: the linked list whose element are  printed
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
	{
		return (num);
	}

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
