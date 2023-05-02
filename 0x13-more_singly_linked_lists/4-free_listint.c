#include "lists.h"

/**
  * free_listint - free a linked list
  *@head: Head of the list
  * Return: Nothing
  */

void free_listint(listint_t *head)
{
	listint_t *zee;

	while (head)
	{
		zee = head->next;
		free(head);

		head = zee;
	}
}
