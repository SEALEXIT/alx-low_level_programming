#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index idex of linked list
  * @head: pointer to first node of the list
  * @index: index of node to be deleted
  * Return: 1 if success , -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;

		i++;
	}

	curr = temp->next;
	temp->next = curr->next;
	free(curr);

	return (1);

}
