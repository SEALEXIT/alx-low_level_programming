#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * struct dog - structure name
  * @name: name of the dog
  * @age: age of the dog
  * @owner: Owner of the dog
  * Description: Longer Description
  * dog_t - typedef of dog
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

