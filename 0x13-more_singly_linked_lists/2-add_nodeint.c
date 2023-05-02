#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning list
 * @head: pointer to the first node in our list
 * @n: data to be inserted in our new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
