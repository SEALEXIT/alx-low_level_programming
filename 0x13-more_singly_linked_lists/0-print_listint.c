#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: Pointer to the first node ...Header
  * Return: Number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h)
	{

		printf("%u\n", h->n);

		counter++;
		h = h->next;
	}

	return (counter);
}
