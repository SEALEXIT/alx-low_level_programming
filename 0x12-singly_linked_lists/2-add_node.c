#include "lists.h"

/**
  * add_node - function that adds a new node
  * @head: address of the pointer
  * @str: String
  * Return: Pointer to the new node created
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));

	new_node->str = strdup(str);
	(*new_node).len = strlen(str);
	(*new_node).next = *head;

	if (new_node == NULL)
		return (NULL);

	while (new_node)
	{
		printf("[%u] %s\n", (*new_node).len, new_node->str);
		new_node = new_node->next;
	}
	return (new_node);
}



