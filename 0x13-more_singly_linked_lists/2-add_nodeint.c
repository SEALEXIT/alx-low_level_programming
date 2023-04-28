#include "lists.h"

/**
  * add_nodeint - adds node at the begining of a listint_t list
  * @head: Pointer to the firat node
  * @n: Data to the node
  * Return: Pointer to the new node
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
