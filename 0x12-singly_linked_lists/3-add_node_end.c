#include "lists.h"

/**
  * add_node_end - ads a node at the end of a list
  * @head: first node which is NULL
  * @str: String
  * Return: pointer to the node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	while (new)
	{
		printf("[%u] %s\n", new->len, (*new).str);
		new = new->next;
	}
	return (*head);
}

