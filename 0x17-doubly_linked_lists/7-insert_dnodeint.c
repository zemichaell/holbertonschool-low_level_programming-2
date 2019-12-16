#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at given position
 * @h: head of the node
 * @idx: index where to place node
 * @n: data for the node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;
	unsigned int cont = 0;

	tmp = *h;
	if (*h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (tmp != NULL && cont <= idx)
	{
		if (cont == idx)
		{
			new_node->prev = tmp->prev;
			new_node->next = tmp;
			tmp->prev->next = new_node;
			tmp->prev = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		cont++;
	}
	return (NULL);
}
