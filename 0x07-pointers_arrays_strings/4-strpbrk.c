#include "main.h"

/**
  * _strpbrk - finds the first matching character in the scanned string.
  * @s: The string being scanned
  * @accept: Our string
  * Return: address of the first matching character.
  */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
