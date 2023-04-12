#include "main.h"
/**
  * _strdup - returns pointer to newly allocated space in memory
  * @str: Original string
  * Return: pointer to newly allocated memory adress
  */

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
		return (NULL);

	return (dup);
}
