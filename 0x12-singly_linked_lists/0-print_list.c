#include "lists.h"

/**
  * print_list - prints all elements of a list_t list
  * @h: The node passed
  * Return: Number of Nodes
  */
size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		if ((*h).str == NULL)
			printf("[%d] (nil)\n", 0);

		printf("[%u] %s\n", (*h).len, h->str);
		h = h->next;

		counter++;
	}

	return (counter);
}

