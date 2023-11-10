#include "lists.h"

/**
 * add_dnodeint - adds new head node to dlist
 * @head: address of pointer to current head node
 * @n: int field of new node
 *
 * Return: address of new node of NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*had = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*khead)->prev = new;
		*head = new;
	}
	return (new);
}
