#include "dog.h"

/**
  * new_dog - creates a new dog
  * @name: name of the dog
  * @age: Age of the dog
  * @owner: owner of the new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));


	dog->name = name;
	(*dog).age = age;
	(*dog).owner = owner;

	return(dog);
}



