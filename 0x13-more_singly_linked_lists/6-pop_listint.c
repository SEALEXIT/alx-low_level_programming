#include "lists.h"

/**
  * pop_listint - deletes the head node and returns head nodes data
  * @head: pointer to first node of list
  * Return: head nodes data or 0 if list was empty
  */

int pop_listint(listint_t **head)
{

	listint_t *tempo;
	int counter;

	if (!head || !*head)
		return (0);

	counter = (*head)->n;
	tempo = (*head)->next;

	free(*head);
	*head = tempo;


	return (counter);

}
