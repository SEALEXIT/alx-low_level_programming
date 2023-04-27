#include "lists.h"

/**
  * list_len - culculates number of elements
  * @h: the Node
  * Return: Number of elements
  */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

