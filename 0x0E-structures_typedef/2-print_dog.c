#include "dog.h"

/**
  * print_dog - prints out dog elements
  * @d: pointer to dog elements
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	struct dog *dd;

	dd = d;
	

	if (d == NULL)
	{

		printf(" ");
	
	 if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	if ((*d).owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	}
	else
	{
		dd = (struct dog *)malloc(sizeof(struct dog));

	printf("Name: %s\n", (*dd).name);
	printf("Age: %f\n", dd->age);
	printf("Owner: %s\n", (*dd).owner);
	}
}
