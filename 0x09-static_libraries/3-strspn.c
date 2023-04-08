#include "main.h"

/**
  * _strspn - Locates adress of the first carracter that does not match in our chracter string
  * @s: string under test
  * @accept: Our character string
  * Return: Address of first unmatching character
  */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
