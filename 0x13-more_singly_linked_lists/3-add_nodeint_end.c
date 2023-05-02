#include "lists.h"

/**
  * add_nodeint_end - adds a node at the end of the list
  * @head: Pointer to the first node
  * @n: data of the node
  * Return: Address of the added node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t = *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (*head)
	{
		*head = (*head)->next;
	}

	(*head)->next = new;

	return (new);
}


