#include "lists.h"

/**
  * listint_len - prints the number of elements in a linked list
  * @h:  Header to the first node
  * Return: Number of elements in a node
  */

size_t listint_len(const listint_t *h)
{

	int counter = 0;

	while (h)
	{
		counter++;

		h = (*h).next;
	}

	return (counter);

}
