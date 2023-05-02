#include "lists.h"

/**
  * get_nodeint_at_index - gets the nth node of a list
  * @head: Pointer to first node of list
  * @index: index of the node
  * Return: nth node of the list
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *tempo = head;

	while (tempo && i < index)
	{
		tempo = tempo->next;
		i++;
	}

	return (tempo ? tempo : NULL);
}
