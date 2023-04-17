#include "dog.h"

/**
  * print_dog - prints out dog elements
  * @d: pointer to dog elements
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		printf(" ");
	
	 if ((*d).name == NULL)
	{
		printf("Name: (nill)\n");
	}
	if (d->age == 0)
	{
		printf("Age: (nill)\n");
	}
	if ((*d).owner == NULL)
	{
		printf("Owner: (nill)\n");
	}
	}
	else
	{

	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (*d).owner);
	}
}
