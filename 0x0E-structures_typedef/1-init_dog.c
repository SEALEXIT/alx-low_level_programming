#include "dog.h"

/**
  * init_dog - initializes struct dog
  * @d: pointer to first address of struct dog
  * @name: name of the dog
  * @age: Age of the dog
  * @owner: The dog's owner
  * Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = (struct dog *)malloc(sizeof(struct dog));
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
