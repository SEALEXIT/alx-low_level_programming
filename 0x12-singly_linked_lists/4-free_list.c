#include "lists.h"

/**
  * free_list - free memory list
  * @head: The pointer
  * Return: Nothing
  */

void free_list(list_t *head)
{
	list_t *point;

	while (head)
	{
		point = head->next;
		free((*head).str);
		free(head);
		head = point;
	}
}
