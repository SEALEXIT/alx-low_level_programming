#include "main.h"

/**
 * _strchr - search for first occurence of a character
  * @s: the string in question
  * @c: the character being searched
  * Return: adress of the character location if found/if not -Return NULL
  */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
