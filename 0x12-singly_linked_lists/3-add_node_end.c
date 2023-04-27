#include "lists.h"

/**
  * add_node_end - ads a node at the end of a list
  * @head: first node which is NULL
  * @str: String
  * Return: pointer to the node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *point;

	point = *head;

	new = (list_t *)malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (point->next != NULL)
	{
		point = point->next;
	}
	point->next = new;

	return (new);
}

