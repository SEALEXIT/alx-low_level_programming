#include "dog.h"

/**
  * free_dog - free dog memory
  * @d: the pointer to struct dog
  * Return: nothing
  */

void free_dog(dog_t *d)
{
	free(d);
}
