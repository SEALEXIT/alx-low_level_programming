#include "dog.h"

/**
  * print_dog - prints out dog elements
  * @d: pointer to dog elements
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	struct dog  *DOG = d;

	if (DOG == NULL)
	{
		printf(" ");
	
	 if ((*DOG).name == NULL)
	{
		printf("Name: (nill)\n");
	}
	if (DOG->age == 0)
	{
		printf("Age: (nill)\n");
	}
	if ((*DOG).owner == NULL)
	{
		printf("Owner: (nill)\n");
	}
	}
	else
	{

	printf("Name: %s\n", (*DOG).name);
	printf("Age: %f\n", DOG->age);
	printf("Owner: %s\n", (*DOG).owner);
	}
}
